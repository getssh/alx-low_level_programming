#include "holberton.h"
/**
  * main - print our passed argumnets
  * @argc: count padded arguments
  * @argv: arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
