#include <stdio.h>
/**
  * print_name - print passed string using function pointer
  * @name: string to be printed
  * @f: functon pointer
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
