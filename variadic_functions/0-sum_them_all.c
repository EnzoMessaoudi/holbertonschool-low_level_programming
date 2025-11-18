#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Return the sum of all the parameters
* @n: Const variable which tell us how many arg it passes
* Return: Return the result of sum_theme_all
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list t;
	int result = 0;
	unsigned int i;

	va_start(t, n);

	for (i = 0; i < n; i++)
		result += va_arg(t, int);

	va_end(t);
	return (result);
}
