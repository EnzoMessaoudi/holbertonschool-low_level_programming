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
	va_list args;
	unsigned int i;
	int value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);

		printf("%d", value);
		
		if (separator[0] != '\0' && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
