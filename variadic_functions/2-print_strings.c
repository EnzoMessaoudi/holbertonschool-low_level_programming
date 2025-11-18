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
		if (i == n - 1)
			printf("%s\n", string);
		else
		{
			if (separator[0] == '\0')
			{
				if (string[0] == '\0')
					printf("(nil)");
				else
					printf("%s", string);
			}
			else if (string[0] == '\0')
				printf("(nil)%s", separator);
			else
				printf("%s%s", string, separator);
		}
	}
	va_end(args);
}
