#include <stdio.h>
/**
 * main - print single digit numbers
 * Return: zero Sucess
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	putchar('\n');
	return (0);
}
