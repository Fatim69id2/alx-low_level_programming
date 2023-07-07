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
	return (strncat(dest, src, n));
}
