#include <stdio.h>
/**
 * main - print single digit comp
 * Return: sucess zero
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');

	return (0);
}
