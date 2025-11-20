#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - Function that print anything passed in parameter
* @format: Types of the arguments passed
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		 format[i] == 'f' || format[i] == 's')
		{

			printf("%s", separator);

			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			else if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			else if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
			}
			separator = ", ";
		}

		i++;
	}
	va_end(args);
	putchar('\n');
}
