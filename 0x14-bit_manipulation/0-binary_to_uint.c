#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: String containing the binary number
 * Return: The converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int j = 0;

	if (!b)
	{
		return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		n = n << 1;

		if (b[j] == '1')
			n += 1;
	}

	return (n);
}
