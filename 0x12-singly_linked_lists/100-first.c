#include "lists.h"
void __attribute__((constructor)) before(void);

/**
 * before - Prints a string before the main function is executed
 * Return: nothing
 */
void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
