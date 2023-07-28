#include <stdio.h>
#include "lists.h"

/**
 * printMessageBeforeMain - Apply the constructor attribute to
 * printMessageBeforeMain() so that it
 *   is executed before main()
*/
void _constructor() __attribute__((constructor));

void _constructor()
{
	printf("You're beat! and yet, you must allow,\n");
	printf(" I bore my house upon my back!\n");
}
