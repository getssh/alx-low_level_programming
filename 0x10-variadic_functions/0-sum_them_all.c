#include "variadic_functions.h"
/**
  * sum_them_all - adds all passed ints to the function
  * @n: number of passed arguments
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
