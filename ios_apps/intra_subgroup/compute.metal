

#include <metal_stdlib>
using namespace metal;
kernel void plain_2t_2i_0(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_2i_1(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_2i_2(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_2i_3(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_2i_4(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_2i_5(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_2i_6(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_2i_7(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}

#include <metal_stdlib>
using namespace metal;
kernel void plain_2t_3i_0(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_1(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_2(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_3(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_4(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_5(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_6(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_7(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_8(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_9(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_10(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_11(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_12(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_13(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_14(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_15(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_16(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_17(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_18(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_19(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_20(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_21(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_22(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_23(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_24(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_25(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_26(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_27(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_28(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_29(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_30(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_31(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_32(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_33(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_34(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_35(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_36(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_37(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_38(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_39(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_40(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_41(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_42(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_43(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_44(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_45(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_46(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_47(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_48(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_49(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_50(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_51(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_52(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_53(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_54(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_55(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_56(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_57(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_58(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_59(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_60(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_61(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_62(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_63(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_64(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_65(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_66(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_67(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_68(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_69(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_70(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_71(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_72(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_73(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_74(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_75(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_76(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_77(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_78(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_79(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_80(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_81(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_82(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_83(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_84(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_85(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_86(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_87(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_88(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_89(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_90(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_91(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_92(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_93(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_94(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_95(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_96(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_97(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_98(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_99(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_100(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_101(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_102(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_103(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_104(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_105(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_106(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_107(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_108(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_109(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_110(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_111(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_112(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_113(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_114(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_115(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_116(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_117(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_118(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_119(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_120(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_121(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_122(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_123(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_124(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_125(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_126(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_127(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_128(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_129(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_130(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_131(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_132(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_133(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_134(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_135(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_136(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_137(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_138(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_139(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_140(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_141(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_142(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_143(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_144(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_145(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_146(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_147(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_148(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_149(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_150(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_151(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_152(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_153(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_154(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_155(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_156(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_157(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_158(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_159(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_160(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_161(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_162(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_163(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_164(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_165(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_166(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_167(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_168(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_169(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_170(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_171(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_172(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_173(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_174(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_3i_175(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}

#include <metal_stdlib>
using namespace metal;
kernel void plain_2t_4i_0(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_1(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_2(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_3(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_4(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_5(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_6(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_7(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_8(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_9(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_10(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_11(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_12(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_13(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_14(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_15(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_16(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_17(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_18(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_19(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_20(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_21(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_22(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_23(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_24(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_25(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_26(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_27(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_28(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_29(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_30(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_31(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_32(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_33(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_34(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_35(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_36(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_37(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_38(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_39(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_40(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_41(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_42(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_43(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_44(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_45(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_46(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_47(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_48(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_49(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_50(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_51(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_52(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_53(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_54(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_55(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_56(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_57(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_58(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_59(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_60(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_61(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_62(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_63(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_64(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_65(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_66(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_67(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_68(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_69(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_70(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_71(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_72(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_73(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_74(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_75(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_76(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_77(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_78(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_79(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_80(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_81(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_82(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_83(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_84(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_85(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_86(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_87(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_88(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_89(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_90(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_91(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_92(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_93(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_94(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_95(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_96(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_97(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_98(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_99(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_100(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_101(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_102(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_103(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_104(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_105(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_106(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(y, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(y, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_107(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(y, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(y, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_108(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_109(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_110(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_111(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_112(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_113(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_114(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_115(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_116(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_117(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_118(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_119(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_120(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_121(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_122(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_123(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_124(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_125(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_126(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_127(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_128(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_129(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_130(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_131(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_132(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_133(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_134(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_135(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_136(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_137(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_138(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_139(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_140(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_141(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_142(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_143(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_144(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_145(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_146(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_147(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_148(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_149(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_150(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_151(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_152(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_153(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_154(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(y, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(y, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_155(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(y, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(y, 0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_156(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_157(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_158(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_159(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_160(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_161(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_162(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_163(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_164(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_165(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_166(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_167(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_168(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_169(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_170(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_171(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_2t_4i_172(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}

#include <metal_stdlib>
using namespace metal;
kernel void plain_3t_3i_0(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_1(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_2(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_3(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_4(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_5(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_6(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_7(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_8(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_9(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_10(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_11(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_12(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_13(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_14(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_15(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_16(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_17(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_18(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_19(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_3i_20(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}

#include <metal_stdlib>
using namespace metal;
kernel void plain_3t_4i_0(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_1(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_2(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_3(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_4(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_5(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_6(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_7(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_8(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_9(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_10(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_11(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_12(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_13(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_14(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_15(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_16(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_17(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_18(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_19(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_20(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_21(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_22(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_23(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_24(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_25(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_26(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_27(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_28(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_29(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_30(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_31(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_32(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_33(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_34(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_35(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_36(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_37(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_38(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_39(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_40(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_41(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_42(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_43(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_44(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_45(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_46(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_47(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_48(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_49(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_50(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_51(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_52(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_53(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_54(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_55(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_56(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_57(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_58(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_59(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_60(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_61(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_62(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_63(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_64(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_65(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_66(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_67(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_68(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_69(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_70(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_71(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_72(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_73(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_74(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_75(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_76(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_77(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_78(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_79(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_80(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_81(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_82(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_83(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_84(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, 1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_85(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_86(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_87(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_88(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_89(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_90(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_91(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_92(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_93(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_94(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_95(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_96(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_97(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_98(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, 0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_99(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_100(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_101(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_102(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_103(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}



kernel void plain_3t_4i_104(device atomic_uint * x, device atomic_uint * y, device atomic_int* count, uint gid_x [[thread_position_in_grid]], uint total_threads [[threads_per_grid]], uint lane [[ thread_index_in_simdgroup ]], uint simd_width [[ threads_per_simdgroup ]], uint sid_x [[simdgroup_index_in_threadgroup]]) {
	int pc = 0;

	if (sid_x == 0 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 1 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (sid_x == 2 && lane == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, 1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	atomic_fetch_add_explicit(count, 1, memory_order_relaxed);
}

