#include "holberton.h"
/**
  * _puts - print out a string
  * @str: a string to be printed
  * Return: void
  */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
