#include "holberton.h"
/**
  * print_numbers - print numbers form 0 to 9
  * Return: void nothing
  */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
