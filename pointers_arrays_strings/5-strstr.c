#include "main.h"
#include <stddef.h>

/**
* _strstr - Function that locate a substring
* @haystack: string give by the user
* @needle: the substring we looking for
* Return: Return the value of r
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	    if (*needle == '\0')
        return haystack;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j])
			j++;

		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
