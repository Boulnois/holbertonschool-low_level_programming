#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Selects the appropriate operation based on a string input.
 * @s: A string representing the operation (e.g., "+", "-", "*", "/", "%").
 *
 * Return: A pointer to the corresponding function that performs the operation,
 *         or NULL if the operation is not recognized.
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
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	i++;
	}
	return (NULL);
}
