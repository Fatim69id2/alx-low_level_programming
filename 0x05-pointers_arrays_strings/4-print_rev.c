#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: 0
*/

void print_rev(char *s)
{
	int length = 0;
	char *p = s;
	int i;

	while (*p != '\0')
	{
		length++;
		p++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
