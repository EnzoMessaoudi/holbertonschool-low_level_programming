#include "main.h"

/**
* _memcpy - Function that copies memory area of src inside of dest
* @dest: Character wich received the value
* @src: Character which the value is taken
* @n: How many Character we want to change
* Return: Return the value of dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
