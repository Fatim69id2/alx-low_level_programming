
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
/**
 *create_array- how to create array
 *@size: the size
 *@c: the character
 *Return: this function return a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(c));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
