#include "holberton.h"
/**
  * _abs - print absolute value of an integer
  * Return: absolute value of given integer
  */
int _abs(int)
{
	int n;

	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	else
		return (0);
}
