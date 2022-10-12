#include "sort.h"

/**
 * swap- function to swap 2 integers
 * @a: address of the first element
 * @b: address of the second element
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort- Function to sort array using the selection sort
 * @array: The array to be sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx, action;

	for (i = 0; i < size - 1; i++)
	{
		action = 0;
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[min_idx] > array[j])
			{
				min_idx = j;
				action = 1;
			}
		}
		if (action)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
