#include <stdio.h>
/**
 * main - print alphabet in lower and upper case
 * Return: zero success
 */
int main(void)
{
	char small = 'a';
	char capital = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}

	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}

	putchar('\n');

	return (0);
}
