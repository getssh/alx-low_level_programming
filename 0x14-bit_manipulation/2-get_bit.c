#include "main.h"
/**
  * get_bit - change int to binary and return bit at index
  * @n: given number
  * @index: index of the bit to find
  * Return: the bit at the given index or -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int res, i = 0;

	res = int_to_bi(n);

	while (res > 0)
	{
		if (i == index)
			return (res % 10);
		i++;
		res /= 10;
	}

	return (-1);
}
/**
  * int_to_bi - change int to binary
  * @k: number to chnage
  * Return: binary of k
  */
unsigned long int int_to_bi(unsigned long int k)
{
	return (k == 0 || k == 1 ? k : ((k % 2) + 10 * int_to_bi(k / 2)));
}
