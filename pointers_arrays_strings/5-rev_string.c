#include "main.h"
#include <stdio.h>

/**
* rev_string - Function that reverse characters
* @s: Character tested
*
*/

void rev_string(char *s)
{
	int end = 0, start = 0;
	char tmp = 0;

	while (s[end] != '\0')
		end++;

	end--;

	while (end > start)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
