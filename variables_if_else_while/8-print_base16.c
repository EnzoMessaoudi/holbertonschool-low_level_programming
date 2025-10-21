#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char n, l;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	l = 'a';
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}

	putchar('\n');
	return (0);
}
