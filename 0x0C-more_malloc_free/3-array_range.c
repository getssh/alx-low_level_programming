#include "holberton.h"
/**
  * array_range - craet an array (arranged)
  * @min: minimum value of the array
  * @max: maximum size of an array
  * Return: pointer to the new array mem location
  */
int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
