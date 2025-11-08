#include "main.h"
#include <stdio.h>

/**
* _atoi - function that convert a string to an integer
* @s: Character tested
* Return: Return the value of num * sign
*/

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			started = 1;
		}
		else if (started)
			break;

		i++;
	}

	return (num * sign);
}
