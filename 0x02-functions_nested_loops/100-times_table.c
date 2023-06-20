#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The number to generate the times table for
 */
void print_times_table(int n)
{
	int a, b;

	if (n < 0 || n > 15)
		return;

	for (a = 0; a <= n; a++)
	{
	for (b = 0; b <= n; b++)
	{
	int result = a * b;

	if (b == 0)
		printf("%d", result);
	else
		printf(",%3d", result);
	}
		printf("\n");
	}
}
