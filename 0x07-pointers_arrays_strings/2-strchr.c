#include "holberton.h"
/**
  * _strchr - find a given char in a string
  * @s: string to be scaned
  * @c: char to find
  * Return: pointer to the char (if found) or null
  */
char *_strchr(char *s, char c)
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
