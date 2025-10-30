#include "main.h"

/**
* _strcpy - function that copies the string pointed to by src
* @dest: Character tested
* @src: Character tested 
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
