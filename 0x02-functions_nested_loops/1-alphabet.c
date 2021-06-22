#include "holberton.h"
/**
  * print_alphabet - print alphabets in lowercase
  * Return: zero success
  */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch >= 'a' && ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
