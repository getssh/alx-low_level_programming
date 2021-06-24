#include <stdio.h>
/**
 * main - print out the largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	long int div = 2, maxfactor;

	while (1)
	{
		if (num % div != 0)
			div = div + 1;
		else
		{
			maxfactor = num;
			num = num / div;
			if (num == 1)
			{
				printf("%ld\n", maxfactor);
				break;
			}
		}
	}
	return (0);
}
