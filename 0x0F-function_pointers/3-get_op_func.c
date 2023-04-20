#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - gets the correct function for an operator
 * @s: operator to get correct function for
 *
 * Return: NULL if no match found, otherwise pointer to correct func
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
	int x = 0;

	while (ops[x].op != NULL)
	{
	if (*(ops[x].op) == *s) /* found correct operator */
	{
		return (ops[x].f);
	}
	x++;
	}
	return (NULL); /* no match found */
}
