#include "main.h"
#include <stdlib.h>

/**
* _strdup - Return a pointer to a new space in memory, with a cpoy of str
* @str: Character copy
* Return: Return the pointer of the duplicated string
*/

char *_strdup(char *str)
{
	char *arr;
	int i, len = 0;

	if (str == 0)
		return (NULL);

	while (str[len] != '\0')
		len++;

	arr = malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = str[i];

	arr[len] = '\0';

	return (arr);
}
