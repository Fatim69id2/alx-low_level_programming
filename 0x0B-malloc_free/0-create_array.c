
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

	s = malloc(size * sizeof(c));
	if (s == 0)
	{
		return (NULL);
	}
	return (s);
}
