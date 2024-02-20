#include "sort.h"

/**
 * swap_ints - A function that swap two integers in an array.
 * @a: A variable that, first integer to swap.
 * @b: A variable that, second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - A function that Sort an array of integers in ascending order.
 * @array: An array variable of integers to sort.
 * @size: The size variable of the array.
 *
 * void: Function that prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t indx, array_len = size;
	bool bub = false;

	if (array == NULL)
		return;
	else if (size < 2)
		return;

	while (bub == false)
	{
		bub = true;
		indx = 0;
		while (indx < array_len - 1)
		{
			if (array[indx] > array[indx + 1])
			{
				swap_ints(array + indx, array + indx + 1);
				print_array(array, size);
				bub = false;
			}
			indx++;
		}
		array_len--;
	}
}
