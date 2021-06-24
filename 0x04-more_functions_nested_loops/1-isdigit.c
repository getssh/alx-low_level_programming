#include "holberton.h"
/**
 * _isdigit - checkes if a value is digit or not
 * @c: value to be checked
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
