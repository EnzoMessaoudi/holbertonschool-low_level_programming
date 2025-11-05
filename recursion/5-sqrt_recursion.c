#include "main.h"

/**
 * helper - recursively tests integers to find a natural sqrt
 * @n: integer to evaluate
 * @guess: current integer tested
 *
 * Return: the natural square root, or -1 if none
 */

int helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	else if (guess * guess == n)
		return (guess);

	return (helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to evaluate
 *
 * Return: the natural square root, or -1 if none
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 0));
}
