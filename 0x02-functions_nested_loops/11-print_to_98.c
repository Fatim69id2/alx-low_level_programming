#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printin from
 * Return: Always 0
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}
