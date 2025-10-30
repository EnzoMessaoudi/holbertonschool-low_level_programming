#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: Character that receivbe the modify
* @src: Character that we want to rpint after the dest
* Return: Return the value of the function
*/

char *_strcat(char *dest, char *src)
{
	int c = 0;
	int j = 0;

	while (dest[c] != '\0')
		c++;

	while (src[j] != '\0')
	{
		dest[c] = src[j];
		c++;
		j++;
	}
	dest[c] = '\0';

	return (dest);
}
