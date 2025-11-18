#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - Prints numbers separated by a separator
* @separator: Given by the user to separate the numbers printed
* @n: How many of number the user want to print
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, value;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);

		if (i == n - 1)
			printf("%d\n", value);
		else
		{
			if (separator == NULL)
				printf("%d", value);
			else
				printf("%d%s", value, separator);
		}
	}
}
