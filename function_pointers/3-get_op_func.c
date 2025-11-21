#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func - Function that choose the correct function for what the user ask
* @s: s will be the operator that the user asked
* Return: Return the valid function depending on what operator the user choosed
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0] && s[1] == ops[i].op[1])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
