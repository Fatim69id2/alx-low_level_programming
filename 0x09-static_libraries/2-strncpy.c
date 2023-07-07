#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncpy - Copies
 * @src: String
 * @dest: Pointer to the destination string
 * @n: maximum number
 * Return: Integer representing the lentgh of string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index;
	int src_len;

	index = 0;
	src_len = 0;
	while (n > 0 && src[index++])
	{
	src_len++;
	}
	for (index = 0; index < n && src[index] != '\0'; index++)
	{
	dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
	dest[index] = '\0';
	}
	return (dest);
}
