#include "sort.h"

/**
* bubble_sort- Function to sort array in ascending order
* @array: The array to be sorted
* @size: The size of the array to be sorted
* Return: Return 0
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, temp = 0;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
				print_array(array, size);
			}
		}
	}
}
