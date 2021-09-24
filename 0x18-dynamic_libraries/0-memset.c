#include "main.h"
/**
  * _memset - fill first n bite with given const data
  * @s: string to be filled
  * @b: given charachter to be filled
  * @n: number of bites to be filled with const b
  * Return: the given string(s) with filled memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* looping var */

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
