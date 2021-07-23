#include "variadic_functions.h"
/**
  * print_all - print passed arguments based on the formats
  * @format: format used to print the passed argument
  * Return: void
  */
void print_all(const char * const format, ...)
{
	int _int, i = 0, len = 0;
	int _char;
	double _float;
	char *string;
	va_list args;

	while (format[len] != 0)
		len++;
	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			{	
				_char = va_arg(args, int);
				printf("%c", _char);
				break;
			}
			case 'i':
			{
				_int = va_arg(args, int);
				printf("%d", _int);
				break;
			}
			case 'f':
			{
				_float = va_arg(args, double);
				printf("%f", _float);
				break;
			}
			case 's':
			{
				string = va_arg(args, char*);
				printf("%s", string);
				break;
			}
		}
		while (i < len - 1)
		{
			printf(", ");
			break;
		}
		i++;
	}
	va_end(args);
	putchar('\n');
}
