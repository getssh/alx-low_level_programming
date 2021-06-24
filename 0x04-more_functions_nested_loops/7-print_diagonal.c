#include "holberton.h"
/**
  * print_diagonal - print diagonal
  * @n: number of diagonals (\) to print
  * Return: void
  */
void print_diagonal(int n)
{
	int row;
	int col;

	if (n <= 0)
		_putchar('\n');
	for (row = 1; row <= n; row++)
	{
		for (col = 1; col < row; col++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
