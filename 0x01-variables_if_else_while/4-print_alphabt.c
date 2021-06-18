#include <stdio.h>
/**
 * main - print alphabets except q and e
 * Return: zero sucess
 */
int main(void)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		if (cha != 'e' && cha != 'q')
		{

			putchar(cha);
		}
		cha++;
	}

	putchar('\n');

	return (0);
}
