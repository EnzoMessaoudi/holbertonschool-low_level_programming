#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Prints and string and finish it with an new line
* @separator: Characters that's between the strings printed
* @n: Numbers of strings the users passes
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (!string)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	putchar('\n');
}
