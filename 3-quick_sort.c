#include "sort.h"

void swap(int *, int *);
void quick_s(int *array, int lo, int hi, size_t size);
int partition(int *array, int, int, size_t);

/**
 * quick_sort - sorts an array using
 * quick sort algorithm
 * @array: array to sort
 * @size: size of the array i.e length
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	quick_s(array, 0, size - 1, size);
}

/**
 * quick_s - implements the sort
 * @array: the array to sort
 * @lo: the begining of the array
 * @hi: the last element of the array
 * @size: size of the array
 */
void quick_s(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);

		quick_s(array, lo, p - 1, size);
		quick_s(array, p + 1, hi, size);
	}
}

/**
 * partition - gives the partition to use
 * for the quick_sort
 * @array: the given array to sort
 * @lo: the begining of the array
 * @size: size of the array
 * @hi: the end of the array
 * Return: the partition value
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot;
	int i, j;

	pivot = array[hi];

	i = lo - 1;
	for (j = lo; j <= hi; ++j)
	{
		if (array[j] < pivot)
		{
			++i;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}

	++i;
	swap(&array[i], &array[hi]);
	print_array(array, size);
	return (i);
}


/**
 * swap - swaps two integers in memory
 * @x: integer pointer value
 * @y: integer pointer value
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
