#include <stdio.h>
/**
 * main - print single digit comp
 * Return: sucess zero
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{


		for (j = i + 1; j <= 9; j++)
		{

			putchar(i + '0');
			putchar(j + '0');
			if (i >= 0 && i < 8)
			{
				putchar(',');
				putchar(' ');
			}


		}

	}

	putchar('\n');

	return (0);
}
