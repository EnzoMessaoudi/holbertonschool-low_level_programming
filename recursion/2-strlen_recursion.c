#include "main.h"

/**
* _strlen_recursion - Function that return the lenght of a string
* @s: String tested for the lenght
* Return: Return the value of the function
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
