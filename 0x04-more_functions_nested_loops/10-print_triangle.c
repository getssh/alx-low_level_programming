#include "holberton.h"
/**
  * print_triangle - print trinagle
  * @size: size of the triangel
  * Return: void
  */
void print_triangle(int size)
{
	int row;
	int col;
	int col2;

	if (size <= 0)
		_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (col = row; col < size; col++)
		{
			_putchar(' ');
		}
		for (col2 = 1; col2 <= row; col2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
