#include <stdio.h>
/**
 * main - print alphabet in reverse
 * Return: zero.Sucess
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
