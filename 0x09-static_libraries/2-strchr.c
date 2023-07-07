#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - Searches
 * @s: String
 * @c: String
 * Return: Pointer to the first of 'c' in 's', or NULL if 'c' is not found
*/
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
