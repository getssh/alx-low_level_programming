#include "holberton.h"
/**
  * str_concat - joins two strings in new allocated mem
  * @s1: first  sring
  * @s2: second string
  * Return: pointer to new string
  */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, size, i, j;
	char *str;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	
	size = len1 + len2 + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[size] = '\0';

	return (str);
}

