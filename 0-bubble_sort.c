#include "sort.h"

/**
 * swap- finction t swap 2 elements
 * @a: first element to be swapped
 * @b: pointer to the second element
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
* bubble_sort- Function to sort array in ascending order
* @array: The array to be sorted
* @size: The size of the array to be sorted
* Return: Return 0
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, action;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			action = 0;
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&(array[j]), &(array[j + 1]));
					action = 1;
				}
				print_array(array, size);
			}
			if (action == 0)
				break;
		}
	}
}
