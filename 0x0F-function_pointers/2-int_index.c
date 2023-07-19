#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Input integer array.
 * @size: Size of the array.
 * @cmp: Pointer to the function to be used
 * to compare values.
 *
 * Return: Index of the first eement for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
