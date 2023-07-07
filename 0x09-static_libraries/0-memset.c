#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - Fills the first 'n'
 * @s: char to check
 * @b: String
 * @n: Number
 * Return: Pointer to the memory after filling
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
