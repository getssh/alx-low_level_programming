#include "holberton.h"
/**
 * _islower - check a character if lowercase or not
 * @c: char to be checked
 * Return: 1 if lowercase or 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
		return (1);
	else
		return (0);
}
