#include "main.h"
/**
  * _strchr - find a given char in a string
  * @s: string to be scaned
  * @c: char to find
  * Return: pointer to the char (if found) or null
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the `\0` of the string str
	 */
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
