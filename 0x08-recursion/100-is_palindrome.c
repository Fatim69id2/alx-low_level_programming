#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int a, b;

	for (a = 0, b = len - 1; a < b; a++, b--)
	{
		if (s[a] != s[b])
		{
			return (0);
		}
	}
	return (1);
}
