#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strlen - Calculate
 * @s: String
 * Return: Integer representing the lentgh of string
*/
int _strlen(char *s)
{
		int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
