#include <stdlib.h>
#include <stdio.h>
void first(void) __attribute__((constructor));
/**
 * main - prints a sentence before the main
 *
 */
void first(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
