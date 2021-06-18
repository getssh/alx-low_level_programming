#include <stdio.h>
/**
  * main - prints alphabet in lower case
  * Return: zero succes
  */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
