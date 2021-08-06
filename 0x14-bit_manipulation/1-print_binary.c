#include "main.h"
/**
 * print_binary - change unsigned to binary and print it
 * @n: int number to be changed to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int x, y, res, i = 0;
	char st[100];

	x = n;
	y = 2;
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	while (x > 1)
	{
		res = 0;
		while (x >= y)
		{
			x = x - y;
			res++;
		}

		st[i] = (x + '0');
		if (res <= 1)
		{
			i++;
			st[i] = (res + '0');
			break;
		}
		x = res;
		i++;
	}
	i++;
	st[i] = '\0';
	while (i >= 0)
	{
		_putchar(st[i]);
		i--;
	}
}
