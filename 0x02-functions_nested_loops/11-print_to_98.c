#include "holberton.h"
/**
 * print_to_98 - print any num to 98
 * @n: number to count
 * Return: void noting
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
			n--;
		}
	}
	printf("\n");
}
