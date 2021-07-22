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
		if (format[i] == 'c')
		{
			_char = va_arg(args, int);
			printf("%c", _char);
		}
		else if (format[i] == 'i')
		{
			_int = va_arg(args, int);
			printf("%d", _int);
		}
		else if (format[i] == 'f')
		{
			_float = va_arg(args, double);
			printf("%f", _float);
		}
		else if (format[i] == 's')
		{
			string = va_arg(args, char*);
			printf("%s", string);
		}
		if (i < len - 1)
			printf(", ");
		i++;
	}
	va_end(args);
	putchar('\n');
}
