#include "main.h"
/**
 *_strncpy - copies at most an inputted n
 * of bytes from string src into dest
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to copied from src
 * Return: A pointer to the resulting string dest
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
	for (index = 0; src[index++] && index < n; index++)
	{
	dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
	dest[index] = '\0';
	}
	return (dest);
}
