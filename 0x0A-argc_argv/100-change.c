#include "holberton.h"
/**
  * main - prints the minimum number of coins to make change
  * @argc: count argumnets
  * @argv: passed arguments
  * Return: 0
 */
int main(int argc, char *argv[])
{
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, res, cents;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents >= 25)
	{
		c1 = cents / 25;
		cents %= 25;
	}
	while (cents >= 10)
	{
		c2 = cents / 10;
		cents %= 10;
	}
	while (cents >= 5)
	{
		c3 = cents / 5;
		cents %= 5;
	}
	while (cents >= 2)
	{
		c4 = cents / 2;
		cents %= 2;
	}
	while (cents >= 1)
	{
		c5 = cents / 1;
		cents %= 1;
	}
	res = c1 + c2 + c3 + c4 + c5;
	printf("%d\n", res);
	return (0);
}
