#include "holberton.h"
/**
 * _strcat - joins two strings
 * @dest: destination
 * @src: source of the string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len, ind2;

	/* source length */
	for (len = 0; dest[len] != '\0'; len++)
		;
	/*join the two*/

	for (ind2 = 0; src[ind2] != '\0'; ind2++)
	{
		dest[len] = src[ind2];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
