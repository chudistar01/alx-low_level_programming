#ifndef _HEADER_
#define _HEADER_

#include <stdlib.h>
#include <stdio.h>
int _binary_search(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
