#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates multiples strings
* @ac: Numbers of strings
* @av: Size of the array
* Return: Return the value of str
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total++;
			j++;
		}
		total++;
	}

	str = malloc(total + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			str[k++] = av[i][j++];
		str[k++] = '\n';
	}

	str[k] = '\0';
	return (str);
}
