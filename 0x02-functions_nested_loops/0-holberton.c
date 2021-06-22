#include "holberton.h"
/**
  * main - print the string holberton
  * Return: zero success
  */
int main(void)
{
	char str[] = "Holberton";
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
	return (0);
}
