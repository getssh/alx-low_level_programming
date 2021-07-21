#include <stdio.h>
/**
  * array_iterator - apply function pointer to all elements of an array
  * @array: given array
  * @size: size of the arrray
  * @action: function pointer
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
