

void plain_2t_2i_0(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_2i_1(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_2i_2(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_2i_3(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_2i_4(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_2i_5(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_2i_6(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_2i_7(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_2i_0(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_2i_1(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_2i_2(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_2i_3(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_2i_4(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_2i_5(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_2i_6(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_2i_7(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_2i_0(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_2i_1(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_2i_2(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_2i_3(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_2i_4(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_2i_5(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_2i_6(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_2i_7(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_0(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_3i_1(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_2(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_3(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_4(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_5(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_6(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_7(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_8(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_9(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_3i_10(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_3i_11(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_12(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_13(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_14(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_15(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_16(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_17(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_18(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_19(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_20(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_21(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_22(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_3i_23(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_24(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_25(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_3i_26(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_3i_27(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_28(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_29(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_30(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_3i_31(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_32(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_33(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_34(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_35(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_36(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_3i_37(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_38(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_39(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_40(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_41(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_42(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_3i_43(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_44(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_45(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_46(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_47(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_48(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_49(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_50(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_51(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_52(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_53(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_54(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_55(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_56(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_57(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_58(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_3i_59(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_60(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_61(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_3i_62(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_63(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_64(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_65(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_66(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_67(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_68(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_69(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_70(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_71(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_72(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_73(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_3i_74(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_75(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_76(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_77(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_78(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_79(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_80(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_81(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_82(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_3i_83(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_84(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_3i_85(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_86(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_87(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_3i_88(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_89(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_90(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_3i_91(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_92(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_93(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_94(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_95(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_96(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_3i_97(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_3i_98(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_99(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_100(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_101(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_102(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_103(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_3i_104(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_105(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_3i_106(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_107(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_108(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_109(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_110(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_111(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_112(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_113(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_114(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_115(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_116(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_117(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_118(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_119(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_120(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_121(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_3i_122(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_123(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_3i_124(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_125(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_126(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_127(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_128(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_129(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_130(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_3i_131(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_132(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_3i_133(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_134(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_135(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_136(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_137(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_138(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_3i_139(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_140(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_141(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_142(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_143(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_144(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_145(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_146(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_147(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_3i_148(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_149(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_150(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_151(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_152(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_153(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_154(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_155(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_156(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_157(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_158(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_159(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_160(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_161(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_162(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_163(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_164(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_3i_165(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_166(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_167(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_168(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_169(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_170(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_171(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_172(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_173(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_3i_174(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_3i_175(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_0(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_3i_1(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_2(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_3(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_4(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_5(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_6(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_7(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_8(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_9(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_3i_10(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_3i_11(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_12(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_13(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_14(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_15(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_16(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_17(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_18(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_19(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_20(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_21(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_22(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_3i_23(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_24(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_25(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_3i_26(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_3i_27(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_28(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_29(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_30(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_3i_31(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_32(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_33(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_34(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_35(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_36(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_3i_37(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_38(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_39(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_40(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_41(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_42(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_3i_43(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_44(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_45(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_46(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_47(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_48(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_49(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_50(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_51(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_52(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_53(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_54(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_55(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_56(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_57(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_58(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_3i_59(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_60(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_61(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_3i_62(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_63(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_64(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_65(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_66(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_67(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_68(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_69(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_70(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_71(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_72(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_73(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_3i_74(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_75(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_76(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_77(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_78(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_79(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_80(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_81(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_82(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_3i_83(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_84(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_3i_85(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_86(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_87(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_3i_88(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_89(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_90(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_3i_91(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_92(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_93(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_94(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_95(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_96(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_3i_97(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_3i_98(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_99(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_100(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_101(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_102(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_103(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_3i_104(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_105(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_3i_106(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_107(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_108(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_109(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_110(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_111(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_112(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_113(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_114(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_115(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_116(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_117(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_118(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_119(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_120(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_121(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_3i_122(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_123(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_3i_124(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_125(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_126(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_127(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_128(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_129(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_130(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_3i_131(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_132(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_3i_133(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_134(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_135(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_136(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_137(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_138(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_3i_139(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_140(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_141(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_142(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_143(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_144(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_145(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_146(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_147(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_3i_148(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_149(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_150(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_151(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_152(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_153(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_154(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_155(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_156(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_157(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_158(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_159(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_160(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_161(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_162(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_163(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_164(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_3i_165(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_166(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_167(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_168(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_169(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_170(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_171(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_172(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_173(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_3i_174(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_3i_175(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_0(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void round_robin2t_3i_1(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_2(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_3(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_4(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_5(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_6(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_7(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_8(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_9(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void round_robin2t_3i_10(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_3i_11(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_12(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_13(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_14(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_15(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_16(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_17(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_18(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_19(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_20(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_21(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_22(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void round_robin2t_3i_23(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_24(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_25(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_3i_26(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void round_robin2t_3i_27(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_28(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_29(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_30(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_3i_31(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_32(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_33(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_34(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_35(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_36(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void round_robin2t_3i_37(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_38(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_39(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_40(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_41(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_42(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void round_robin2t_3i_43(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_44(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_45(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_46(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_47(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_48(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_49(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_50(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_51(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_52(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_53(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_54(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_55(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_56(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_57(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_58(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_3i_59(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_60(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_61(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_3i_62(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_63(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_64(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_65(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_66(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_67(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_68(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_69(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_70(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_71(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_72(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_73(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void round_robin2t_3i_74(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_75(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_76(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_77(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_78(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_79(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_80(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_81(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_82(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void round_robin2t_3i_83(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_84(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_3i_85(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_86(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_87(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void round_robin2t_3i_88(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_89(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_90(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_3i_91(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_92(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_93(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_94(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_95(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_96(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_3i_97(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void round_robin2t_3i_98(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_99(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_100(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_101(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_102(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_103(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void round_robin2t_3i_104(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_105(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void round_robin2t_3i_106(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_107(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_108(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_109(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_110(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_111(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_112(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_113(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_114(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_115(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_116(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_117(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_118(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_119(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_120(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_121(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void round_robin2t_3i_122(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_123(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_3i_124(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_125(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_126(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_127(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_128(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_129(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_130(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void round_robin2t_3i_131(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_132(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void round_robin2t_3i_133(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_134(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_135(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_136(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_137(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_138(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void round_robin2t_3i_139(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_140(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_141(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_142(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_143(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_144(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_145(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_146(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_147(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void round_robin2t_3i_148(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_149(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_150(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_151(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_152(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_153(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_154(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_155(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_156(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_157(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_158(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_159(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_160(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_161(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_162(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_163(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_164(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void round_robin2t_3i_165(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_166(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_167(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_168(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_169(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_170(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_171(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_172(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_173(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void round_robin2t_3i_174(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void round_robin2t_3i_175(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	uint index = tid / num_testing_threads;

	if (tid % num_testing_threads == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid % num_testing_threads == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_0(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_1(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_2(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_3(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_4(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_5(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_6(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_7(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_8(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_9(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_10(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_4i_11(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_12(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_13(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_14(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_15(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_16(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_17(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_18(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_19(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_20(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_21(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_22(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_23(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_24(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_25(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_4i_26(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_27(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_28(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_29(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_4i_30(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_31(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_32(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_33(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_34(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_35(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_4i_36(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_4i_37(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_38(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_39(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_40(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_41(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_42(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_43(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_44(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_45(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_46(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_47(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_48(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_49(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_50(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_51(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_52(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_53(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_54(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_55(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_56(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_57(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_58(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_59(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_60(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_61(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_62(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_63(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_64(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_65(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_4i_66(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_4i_67(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_4i_68(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_69(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_70(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_71(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_72(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_73(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_74(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_75(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_76(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_77(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_78(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_79(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_80(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_81(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_82(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_83(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_84(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_85(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_86(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_4i_87(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_88(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_89(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_90(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_91(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_92(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_93(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_94(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_95(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_4i_96(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_97(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_98(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_99(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_100(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_101(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_102(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_103(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_104(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_4i_105(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_106(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(y, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(y, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_107(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(y, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(y, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_108(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_109(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_4i_110(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_111(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_112(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_113(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_114(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_115(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_116(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_117(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_4i_118(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_119(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_4i_120(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_121(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_122(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_123(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_124(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_125(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_126(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_4i_127(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
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

void plain_2t_4i_128(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_129(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_130(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_131(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_132(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_133(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_134(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_135(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_136(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_137(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_138(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_139(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_140(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_141(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_142(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_143(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_144(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_145(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_146(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_4i_147(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_148(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_149(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_150(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_151(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_152(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_153(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_154(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(y, (uint)0, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(y, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_155(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(y, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(y, (uint)0, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_156(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_157(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_158(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_159(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_160(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void plain_2t_4i_161(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
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

void plain_2t_4i_162(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_163(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_164(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_165(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void plain_2t_4i_166(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void plain_2t_4i_167(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 0) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_168(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

void plain_2t_4i_169(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_170(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_171(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
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

void plain_2t_4i_172(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	if (tid == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)0, memory_order_relaxed) == 1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x, (uint)1, memory_order_relaxed) == 1) { 
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

void chunked_2t_4i_0(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_1(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_2(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_3(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_4(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_5(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_6(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_7(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_8(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_9(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_10(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_4i_11(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_12(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_13(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_14(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_15(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_16(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_17(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_18(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_19(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_20(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_21(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_22(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_23(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_24(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_25(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_4i_26(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_27(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_28(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_29(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_4i_30(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_31(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_32(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_33(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_34(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_35(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_4i_36(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_4i_37(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_38(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_39(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_40(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_41(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_42(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_43(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_44(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_45(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 1;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_46(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_47(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_48(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_49(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_50(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_51(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_52(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_53(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_54(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_55(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_56(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_57(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_58(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_59(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_60(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_61(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_62(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_63(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_64(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_65(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_4i_66(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_4i_67(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_4i_68(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_69(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_70(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_71(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_72(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_73(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_74(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_75(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_76(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_77(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_78(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_79(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_80(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_81(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_82(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_83(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_84(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_85(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_86(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
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

void chunked_2t_4i_87(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_88(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_89(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_90(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_91(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_92(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

void chunked_2t_4i_93(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_94(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_95(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
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

void chunked_2t_4i_96(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_97(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 0 ) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(y+index, (uint) 0, memory_order_relaxed) == 0 ) { 
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

void chunked_2t_4i_98(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
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

void chunked_2t_4i_99(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		if (atomic_fetch_add_explicit(x+index, (uint) 0, memory_order_relaxed) == 1 ) { 
		   pc = 3;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 2: 
		atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 3:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed) ==  0) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_100(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
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

void chunked_2t_4i_101(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 0;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1:
		terminate = 1;
		break;

	     }
	   }
	}

	if (tid / chunk_size == 1) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  1) { 
		   pc = 2;
		}
		else {
		   pc = pc + 1;
		}
		break;

	  case 1: 
		atomic_exchange_explicit(x + index, (uint)0, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 2: 
		if (atomic_exchange_explicit(x + index, (uint)1, memory_order_relaxed) ==  0) { 
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

void chunked_2t_4i_102(atomic_uint * x, atomic_uint * y, atomic_int* count, uint tid) {
	int pc = 0;

	int total_num_threads = MAX_THREADS;
	int num_testing_threads = 2;
	int chunk_size =  total_num_threads / num_testing_threads;
	uint index = tid % chunk_size;

	if (tid / chunk_size == 0) { 
	   int terminate = 0;

	while (true) {
	   if (terminate == 1 || (atomic_load_explicit(cpu_terminate,memory_order_relaxed) == 1)) {
	   break;
	}
	switch(pc) {

	  case 0: 
		atomic_exchange_explicit(y + index, (uint)1, memory_order_relaxed);
		pc = pc + 1;
		break;

	  case 1: 
		pc = pc + 1;
		break;

	  case 2:
		terminate = 1;

