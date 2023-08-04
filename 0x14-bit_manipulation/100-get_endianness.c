#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: If big-endian - 0 If little-endian - 1
*/

int get_endianness(void)
{
	unsigned int num = 1;
	char *x = (char *)&num;

	if (*x)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
