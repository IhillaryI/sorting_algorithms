#include "sort.h"
#include <stdio.h>

void swap(int *x, int *y);


/**
 * selection_sort - sorts using the selection sort
 * algorithm
 * @array: the array to sort
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int min_idx;

	for (i = 0; i < size - 1; ++i)
	{
		min_idx = i;
		for (j = i + 1; j < size; ++j)
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		if ((size_t)min_idx != i)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swaps integers
 * @x: pointer to x
 * @y: pointer to y
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
