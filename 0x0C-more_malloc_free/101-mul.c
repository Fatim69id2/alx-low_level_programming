#include "main.h"
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: Input pointer that represents memory block
 *     to fill
 * @b: Characters to fill/set
 * @n: Number of bytes to be filled
 * Return: Pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}

/**
 * _calloc - Function that allocates memory
 *           for an array using memset
 * @nmemb: Size of array
 * @size: Size of each element
 * Return: Pointer to new allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}


/**
 * multiply - Initialize array with 0 byte
 * @s1: String 1
 * @s2: String 2
 * Return: Nothing
*/

void multiply(char *s1, char *s2)
{
	int i, b1, b2, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	b1 = _length(s1);
	b2 = _length(s2);
	tmp = b2;
	total_l = b1 + b2;
	ptr = _calloc(sizeof(int), total_l);

	temp = ptr;

	for (b1--; b1 >= 0; b1--)
	{
		f_digit = s1[b1] - '0';
		res = 0;
		b2 = tmp;
		for (b2--; b2 >= 0; b2--)
		{
			s_digit = s2[b2] - '0';
			res += ptr[b2 + b1 + 1] + (f_digit * s_digit);
			ptr[b1 + b2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[b1 + b2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}


/**
 * main - Entry point
 * Description: A program that multiplies
 *            two positive numbers
 * @argc: Number of arguments
 * @argv: Arguments array
 * Return: 0 on success 98 on faliure
*/

int main(int argc, char *argv[])
{
	char *a1 = argv[1];
	char *a2 = argv[2];

	if (argc != 3 || check_number(a1) || check_number(a2))
		error_exit();

	if (*a1 == '0' || *a2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(a1, a2);
	return (0);
}
