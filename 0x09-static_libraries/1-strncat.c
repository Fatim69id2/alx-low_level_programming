#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strancat - Concatenates a specified maximum
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to concatenate
 * Return: Pointer to the resulting concatenated string
*/
char *_strancat(char *dest, char *src, int n)
{
	char *Dest = dest;
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (n > 0 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}

	dest[i] = '\0';

	return (Dest);
}
