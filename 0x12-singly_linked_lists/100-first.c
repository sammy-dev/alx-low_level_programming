#include <stdio.h>
#include "lists.h"

void intro(void) __attribute__((constructor));
/**
 * intro - function that prints a sentence before main is executed.
 */
void intro(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
