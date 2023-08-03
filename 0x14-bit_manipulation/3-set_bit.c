#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 in a specific index
 * @n: Number unsigned long int
 * @index: Index of the bit
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n ^= (1 << index);

	return (1);
}
