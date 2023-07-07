#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - Entry point
 * @haystack: Input
 * @needle: Input
 * Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
