#include "holberton.h"
/**
  * string_nconcat - concatenate two strings
  * @s1: first string
  * @s2: second string
  * @n: number of bytes to be added to s1
  * Return: the concatet string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n < len2)
		len2 = n;
	size = len1 + n + 1;
	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}

