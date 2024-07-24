#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t size, int value,
int start_idx, int end_idx);

#endif
