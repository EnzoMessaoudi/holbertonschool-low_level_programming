#include "main.h"
#include <stdio.h>

/**
* _atoi - function that convert a string to an integer
* @s: Character tested
* Return: Return the value of num * sign
*/

int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, started = 0;

	while (s[i] != '\0')
	{
		if (!started)
		{
			if (s[i] == '-')
				sign *= -1;
			else if (s[i] >= '0' && s[i] <= '9')
				started = 1;
		}
		if (started)
		{
			if (s[i] >= '0' && s[i] <= '9')
				num = num * 10 + (s[i] - '0');
			else
				break;
		}
		i++;
	}

	return (num * sign);
}
