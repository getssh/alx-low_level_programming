#include "holberton.h"
/**
  * _realloc - relocate memory on heap
  * @old_size: old size
  * @new_size: new
  * @ptr: previous pointer to mem
  * Return: pointer to reallocated mem
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* aunsigned int i; */
	char *new;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
		return (NULL);
	new = malloc(new_size);

	if (new == NULL)
		return (NULL);
	/*
	 * for (i = 0; i < old_size; i++)
	 *	new[i] = (char*)(ptr[i]);
	 */
	free(ptr);

	return (new);
}
