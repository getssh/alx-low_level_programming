#include "holberton.h"
/**
  * more_numbers - print nums form 0 - 14, 10 times
  * Return: void nothing
  */
void more_numbers(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col > 9)
				_putchar(col / 10 + '0');
			_putchar(col % 10 + '0');
		}
		_putchar('\n');
	}
}
