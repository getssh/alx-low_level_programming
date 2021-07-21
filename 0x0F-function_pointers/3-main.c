#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - give result for two nums with obration
 * @argc: arg count int
 * @argv: arg vector char
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, res;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	s = argv[2][0];
	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	res = (get_op_func(argv[2]))(i, j);
	printf("%d\n", res);
	return (0);
}
