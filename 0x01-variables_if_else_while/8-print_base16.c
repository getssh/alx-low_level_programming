#include <stdio.h>
/**
 * main - print numbers in hexa
 * Return: zero sucess
 */
int main(void)
{
	int i = 0;
	char ch = 'a';

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
