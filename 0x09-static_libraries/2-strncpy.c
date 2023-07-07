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
	return (strncpy(dest, src, n));
}
