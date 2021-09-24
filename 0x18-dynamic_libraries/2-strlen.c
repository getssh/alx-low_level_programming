#include "main.h"

/**
  * _strlen - find length of a given string
  * @s: the given string
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
