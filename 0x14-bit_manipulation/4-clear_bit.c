#include "main.h"
/**
 * clear_bit - Sets the value of a bit at a given index to 0
 * @n: A pointer to the bit
 * @index: The index of bit
 * Return: 1 if it worked, -1 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
