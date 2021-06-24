#include "holberton.h"
/**
 * print_number - print number
 * @n: number to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		;
	else if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
