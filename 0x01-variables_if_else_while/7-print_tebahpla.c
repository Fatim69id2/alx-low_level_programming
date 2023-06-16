#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	char smile;

	smile = 'z';
	while (smile >= 'a')
	{
		putchar(smile);
		smile--;
	}
	putchar('\n');
	return (0);
}
