#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	int pati;

	for (pati = 0; pati <= 9; pati++)
	{
		putchar(pati + '0');
		if (pati != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
