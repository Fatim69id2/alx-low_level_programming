#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strcat - Concatenate the string
 * @dest: char to check
 * @src: String
 * Return: String
*/
char *_strcat(char *dest, char *src)
{
	char *Dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (Dest);
}
