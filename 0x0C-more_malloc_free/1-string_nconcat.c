#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l, a, b;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = l = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[l] != '\0')
		l++;

	if (n >= l)
		n = l;

	str = (char *) malloc((i + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];
	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		str[a] = s2[b];
		a++;
	}
	str[a] = '\0';
	return (str);
}
