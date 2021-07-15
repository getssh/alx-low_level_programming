#include "holberton.h"
/**
  * malloc_checked - allocate memoery on heap using malloc
  * @b: size of bites to be allocated
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
