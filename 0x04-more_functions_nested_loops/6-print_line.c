#include "holberton.h"
/**
  * print_line - print _ n times
  * @n: number of n
  * Return: none void
  */
void print_line(int n)
{
	int count = 1;

	for (count = 1; count <= n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
