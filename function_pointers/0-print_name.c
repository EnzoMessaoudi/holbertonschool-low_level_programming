#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - Print a name
* @name: Name printed
* @f: Function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
