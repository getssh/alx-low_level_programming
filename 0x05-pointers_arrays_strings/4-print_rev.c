#include "holberton.h"
/**
  * print_rev - print a stering in reverse
  * @s: string to be reversed
  * Return: void
  */
void print_rev(char *s)
{
	int len;
	int rev;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (rev = len - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
