#include <stdio.h>
#include "lists.h"

/**
 * printMessageBeforeMain - Apply the constructor attribute to
 * printMessageBeforeMain() so that it
 *   is executed before main()
*/
void printMessageBeforeMain(void) __attribute__((constructor));

void printMessageBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf(" I bore my house upon my back!\n");
	printf("A tortoise, having pretty good sense of a hare's nature");
	printf("challenges one to a race.\n");
}
