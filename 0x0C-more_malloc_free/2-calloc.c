#include "holberton.h"
/**
  * _calloc - allocate memory and set values to zero (like calloc)
  * @nmemb: size of an array
  * @size: btye of each elements in nmemb
  * Return: pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
		ptr[i] = 0;

	return (ptr);
}
