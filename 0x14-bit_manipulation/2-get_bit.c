#include "main.h"

/**
 * get_bit - Returns the value of a bit at given index
 * @n: Unsigned long int input
 * @index: Index of the bit
 * Return: Value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
