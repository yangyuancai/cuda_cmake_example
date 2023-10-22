

#include <stdio.h>
#include <cuda_runtime.h>
#include <device_launch_parameters.h>
#include <device_launch_parameters.h>
#include "helper_cuda.h"
__global__ void vectorAdd(const float *A, const float *B, float *C, int numElements);

