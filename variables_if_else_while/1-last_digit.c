#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)

{
	int n;
	int dernier;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dernier = n % 10;

	printf("Last digit of %d ", n);
	printf("is %d ", dernier);
	if (dernier > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (dernier == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
