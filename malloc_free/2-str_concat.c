#include "main.h"
#include <stdlib.h>

/**
* str_concat - Function that concat s1 and s2
* @s1: First string
* @s2: Seconde string
* Return: Return the address of the array
*/

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	arr = malloc((len1 + 1) + (len2 + 1));

	for (i = 0; i < len1; i++)
		arr[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		arr[i] = s2[j];
		i++;
	}

	return (arr);
}
