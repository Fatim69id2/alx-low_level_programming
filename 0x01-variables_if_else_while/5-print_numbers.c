#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	putchar('\n');
	return (0);
}
