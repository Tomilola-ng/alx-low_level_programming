#ifndef MY_SEARCH_ALGOS_H_
#define MY_SEARCH_ALGOS_H_

#include <math.h>
#include <stdlib.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
