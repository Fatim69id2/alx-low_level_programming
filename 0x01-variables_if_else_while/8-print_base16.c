#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	char Hexa = 'a';

	int c = 0;

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	while (Hexa <= 'f')
	{
		putchar(Hexa);
		Hexa++;
	}
	putchar('\n');
	return (0);
}
