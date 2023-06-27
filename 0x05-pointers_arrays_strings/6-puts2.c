#include "main.h"
/**
 * puts2 - Function should print only one character out of two
 * @str: Input
 * Return: Print
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
