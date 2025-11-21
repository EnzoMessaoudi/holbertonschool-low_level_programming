#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Main function
* @argc: Count if the user calculate two integrers
* @argv: Value of what the user passed
* Return: Always return 0
*/

int main(int argc, char *argv[])
{
	int a, b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Usage: %s number operator number\n", argv[0]);
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
		printf("Error\n");

	if (op_func != NULL)
		printf("%d\n", op_func(a, b));

	return (0);
}

