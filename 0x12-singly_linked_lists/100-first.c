#include <stdio.h>
#include "lists.h"

/**
 * _constructor - Apply the constructor attribute to
 * _constructor() so that it
 *   is executed before main()
*/
void _constructor(void) __attribute__((constructor));

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
