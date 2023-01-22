#include "sort.h"
void swap(int *x, int *y);



/**
 * bubble_sort - sort arrays
 * @array: the array
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	bool swapped;

	for (i = 0; i < size; ++i)
	{
		swapped = false;
		for (j = 0; j < size - 1; ++j)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		if (swapped == false)
			break;
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
