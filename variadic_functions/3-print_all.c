#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_c - print char
* @args: Character
*/
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
* print_i - Print an Int
* @args: Character
*/
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
* print_f - print a float
* @args: Character
*/
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
* print_s - Print a string
* @args: character
*/
void print_s(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
* print_all - Print anything
* @format: Character
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s", separator);
			print_c(args);
			separator = ", ";
		}
		else if (format[i] == 'i')
		{
			printf("%s", separator);
			print_i(args);
			separator = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s", separator);
			print_f(args);
			separator = ", ";
		}
		else if (format[i] == 's')
		{
			printf("%s", separator);
			print_s(args);
			separator = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
