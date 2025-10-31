#include "main.h"
#include <stdio.h>

/**
* _strncpy - function that copies a string
* @dest: Destination where the function copy
* @src: Character we want to copy
* @n: Characters that the user want to copy
* Return: Return the value of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
