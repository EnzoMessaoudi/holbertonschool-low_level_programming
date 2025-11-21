#include <stdio.h>
#include "3-calc.h"

/**
* op_add - Addition a and b
* @a: Character tested
* @b: Character tested
* Return: Return the result
*/

int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
* op_sub - Return the difference between a and b
* @a: Character tested
* @b: Character tested
* Return: Return the difference
*/

int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}

/**
* op_mul - Multiply a and b
* @a: Character tested
* @b: Character tested
* Return: Return the product
*/

int op_mul(int a, int b)
{
	int prod = a * b;

	return (prod);
}

/**
* op_div - divide a and b
* @a: Character tested
* @b: Character tested
* Return: Return the division
*/

int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
* op_mod - Get the remainder of a and b
* @a: Character tested
* @b: Character tested
* Return: Return the remainder
*/

int op_mod(int a, int b)
{
	int rem = a % b;

	return (rem);
}
