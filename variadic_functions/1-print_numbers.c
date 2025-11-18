#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - Print number passed as parameters
* @separator: paramter passed by the user that separate tne numbers
* @n: First number
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n ; i++)
	{
		int value = va_arg(args, int);

		if (i == n - 1)
			printf("%d\n", value);
		else
			if (separator == NULL)
				printf("%d", value);
			else
				printf("%d%s", value, separator);
	}
	va_end(args);
}
