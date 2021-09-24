#include "main.h"
/**
 * _isalpha - check a character if letter or not
 * @c: char to be checked
 * Return: 1 if letter or 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 91) || (c >= 97 && c <= 123))
		return (1);
	else
		return (0);
}
