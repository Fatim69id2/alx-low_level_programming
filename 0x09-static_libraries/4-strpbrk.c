#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - Entry point
 * @s: Input
 * @accept: Input
 * Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
