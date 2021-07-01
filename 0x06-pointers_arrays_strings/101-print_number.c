#include "holberton.h"
#include <limits.h>
#include <stdio.h>
/**
 * print_number - check the code for Holberton School students.
 *@n: number
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		if (n != INT_MIN)
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		print_number(n / 10);

	if (n > 0)
	_putchar(n % 10 + '0');
}
