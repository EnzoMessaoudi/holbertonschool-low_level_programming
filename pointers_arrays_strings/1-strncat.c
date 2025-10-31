#include "main.h"
#include <stdio.h>

/**
* _strncat - function that concatenates two strings
* @dest: Character tested
* @src: Character tested
* @n: Character tested
* Return: Return the value of dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int j = 0;

	while (dest[c] != '\0')
		c++;

	while (j < n && src[j] != '\0')
	{
		dest[c] = src[j];
		j++;
		c++;
	}
	dest[c] = '\0';

	return (dest);
}
