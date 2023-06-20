#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 * Return: empty output
*/
void times_table(void)
{
	int a, b, product;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
		product = a * b;

	if (b == 0)
		printf("%2d", product);
	else
		printf(", %2d", product);
	}

	putchar('\n');
	}
}
