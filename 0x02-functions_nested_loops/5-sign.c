#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 for positive number, -1 for negative number or 0 for anything else
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
