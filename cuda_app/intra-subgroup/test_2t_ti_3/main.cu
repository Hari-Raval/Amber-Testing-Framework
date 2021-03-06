#include <iostream>
#include <assert.h>
#include <atomic>
#include <thread>
#include <vector>
#include <chrono>
#include <pthread.h>
#include <functional>

// From: https://stackoverflow.com/questions/14038589/what-is-the-canonical-way-to-check-for-errors-using-the-cuda-runtime-api
#define gpuErrchk(ans) { gpuAssert((ans), __FILE__, __LINE__); }
inline void gpuAssert(cudaError_t code, const char *file, int line, bool abort=true)
{
   if (code != cudaSuccess) 
   {
      fprintf(stderr,"GPUassert: %s %s %d\n", cudaGetErrorString(code), file, line);
      if (abort) exit(code);
   }
}

using std_clock = std::chrono::system_clock;
using sec = std::chrono::duration<double>;
using namespace std;

typedef void (*tfunc)(uint* arg0, uint* arg1, uint* arg2);

vector<string> kernel_names;
vector<tfunc*> kernels;

#include "kernels.h"
#include "kernel_init.h"

#define ITERS 20

int main(int argc, char **argv) {

  const unsigned int total_blocks = 1;
  const unsigned int total_threads = 3;
  
  const unsigned int bufferSize = (total_threads * sizeof(int));

  uint *dBufferX;
  uint *dBufferY;
  uint *dBufferCounter;
  uint *hBufferX;
  uint *hBufferY;
  uint *hBufferCounter;
  
  gpuErrchk(cudaMalloc(&dBufferX, bufferSize)); 
  gpuErrchk(cudaMalloc(&dBufferY, bufferSize));
  gpuErrchk(cudaMalloc(&dBufferCounter, sizeof(uint)));

  hBufferX = (uint*) malloc(bufferSize);
  hBufferY = (uint*) malloc(bufferSize);
  hBufferCounter = (uint *) malloc(sizeof(uint));

  init_kernels();
  int total_killed = 0;
  tfunc host_function_ptr;

  int t = 0;
  cout << "running test: " << kernel_names[t] << "\n";
  gpuErrchk(cudaMemcpyFromSymbol(&host_function_ptr, *(kernels[t]), sizeof(tfunc)));
  
  int success = 0;
  int killed = 0;
  
  for (int i = 0; i < ITERS; i++) {	      
      for (int j = 0; j < total_threads; j++) {
	hBufferX[j] = 0;
	hBufferY[j] = 0;
      }
      hBufferCounter[0] = 0;
      
      gpuErrchk(cudaMemcpy(dBufferX, hBufferX, bufferSize, cudaMemcpyHostToDevice));
      gpuErrchk(cudaMemcpy(dBufferY, hBufferY, bufferSize, cudaMemcpyHostToDevice));
      gpuErrchk(cudaMemcpy(dBufferCounter, hBufferCounter, sizeof(uint), cudaMemcpyHostToDevice));

      test_launcher_kernel<<<1,3>>>(dBufferX, dBufferY, dBufferCounter, host_function_ptr);
      
      gpuErrchk(cudaDeviceSynchronize());
      
      gpuErrchk(cudaMemcpy(hBufferCounter, dBufferCounter, sizeof(uint), cudaMemcpyDeviceToHost));
      assert(*hBufferCounter == 3);
    }
    
  gpuErrchk(cudaFree(dBufferX));
  gpuErrchk(cudaFree(dBufferY));
  gpuErrchk(cudaFree(dBufferCounter));
  free(hBufferX);
  free(hBufferY);
  free(hBufferCounter);
  return 0;    
}
