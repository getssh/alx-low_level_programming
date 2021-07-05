#include "holberton.h"
/**
  * _memcpy - copy n bite from src to dest
  * @dest: string to reicive the copid bites
  * @src: source of the string to be copied
  * @n: numbers of bites to be copied
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
