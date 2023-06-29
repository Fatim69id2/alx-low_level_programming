#include "main.h"
/**
 *_strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: maximum number of characters to concatenate
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
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
