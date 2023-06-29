#include "main.h"
/**
 * leet - encode into 1337speak
 * @str: The string to be encoded
 * Return: n value
*/

char *leet(char *str)
{
	char *ptr = str;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i, j;

	while (*ptr != '\0')
	{
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
	if (*ptr == s1[i])
	{
	*ptr = s2[j];
	break;
	}
	i++;
	j++;
	}
	ptr++;
	}
	return (str);
}
