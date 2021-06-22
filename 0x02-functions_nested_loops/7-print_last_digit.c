#include "holberton.h"
/**
  * print_last_digit - print last digit of a number
  * @n: number to entered
  * Return: last digit of the number
  */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = n * -1;

	last = n % 10;
	_putchar(last + '0');
	return (last);
}
