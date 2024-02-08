#ifndef SEARCH_H
#define SEARCH_H

#include <stddef.h>
#include <stdlib.h>
#include <stdlib.h>

/**
 * search algorithms - search algorithms
 * 
 * @array: array
 * @size: size
 * @value: value
*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
