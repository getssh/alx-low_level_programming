#include "holberton.h"
/**
  * main - calculate the result of two nums
  * @argc: number of passed args
  * @argv: args
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int res;

	if (argc > 2)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
