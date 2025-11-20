#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Print anything
* @format: Type of the characters passed
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s", separator);
				printf("%c", va_arg(args, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s", separator);
				printf("%d", va_arg(args, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s", separator);
				printf("%f", va_arg(args, double));
				separator = ", ";
				break;
			case 's':
				printf("%s", separator);
				str = va_arg(args, char *);
				if (!str)  /* 2nd if */
					str = "(nil)";
				printf("%s", str);
				separator = ", ";
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
