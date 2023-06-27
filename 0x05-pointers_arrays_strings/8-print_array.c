#include "main.h"
/**
 * print_array - Function that prints n elements of an array
 * @a: Array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
