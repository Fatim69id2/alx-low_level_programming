#include "main.h"
/**
 * puts2 - Function should print only one character out of two
 * @str: Input
 * Return: Print
*/

void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
