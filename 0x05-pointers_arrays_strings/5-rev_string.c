#include "holberton.h"
/**
  * rev_string - reverse a string
  * @s: string to be reversed
  * Return: void
  */
void rev_string(char *s)
{
	int len;
	int tmp;
	int index = 0;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (index = 0; index < len; index++)
	{
		tmp = s[index];
		s[index] = s[len - 1];
		s[len - 1] = tmp;
		len--;
	}
}
