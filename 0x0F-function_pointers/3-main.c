#include "3-calc.h"
/**
  * main - applay basic math opration on two numbers
  * @argc: count arguments of argv
  * @argv: argument vector (2d string array)
  * Return: 0 (sucess)
  */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	char sign;

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

	sign = argv[2][0];
	if (sign != '+' && sign != '-' && sign != '*' && sign != '/' && sign != '%')
	{
		printf("Error\n");
		exit(99);
	}
	/*if ((sign == '/' && argv[3][0] == '0') || (sign == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}*/

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = (get_op_func(argv[2]))(num1, num2);
	printf("%d\n", res);
	return (0);
}
