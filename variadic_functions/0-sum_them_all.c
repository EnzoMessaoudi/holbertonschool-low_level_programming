#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Return the sum of all the parametrs passed
* @n: Number of parameter passed
* return: Return the value of the variable value
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int value = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		value += va_arg(args, int);

	va_end(args);

	return (value);
}
