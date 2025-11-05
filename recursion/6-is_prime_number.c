#include "main.h"

/**
* helper- function that help the main
* @n: character tested
* @i: character that test if n is a prime number
* Return: Return the value to the main function
*/

int helper(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (helper(n, i + 1));
}


/**
* is_prime_number - Function that return 1 if n is a prime number
* @n: Character tested
* Return: Return 1 if prime number, 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper(n, 2));
}
