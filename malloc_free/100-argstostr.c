#include <stdlib.h>
#include <string.h>

/**
* argstostr - Concatenates multiple strings
* @ac: Number of string
* @av: Array
* Return: Return the value oif str
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total += strlen(av[i]) + 1;

	str = malloc(total + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}

	str[k] = '\0';
	return (str);
}
