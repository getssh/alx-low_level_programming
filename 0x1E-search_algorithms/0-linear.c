#include <stdio.h>
#include "search_algos.h"
/**
* linear_search - searches for a given value in an array
* @array: array to be searched for a given value
* @size: size of the array elements
* @value: the vlaue to be searched in array
* Return: index of found value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
