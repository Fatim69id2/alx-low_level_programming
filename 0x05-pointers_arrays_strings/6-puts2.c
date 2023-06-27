#include "main.h"
/**
 * puts2 - Function should print only one character out of two
 * @str: Input
 * Return: Print
*/

void puts2(char *str)
{
	int i = 0;
	int o;
	int t = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	putchar('\n');
}
