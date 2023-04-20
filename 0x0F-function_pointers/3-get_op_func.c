#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * find_op_by_key - finds the operator
  * @ops: the operator array
  * @key: the operator
  * @thisindex: the index of the operator
  * Return: the operator func
  */
op_t find_op_by_key(op_t ops[], char *key, int thisindex)
{
if (key == NULL || thisindex >= 5 || strlen(key) > 1)
{
return (ops[5]);
}
if (*(ops[thisindex].op) == *key)
{
return (ops[thisindex]);
}

return (find_op_by_key(ops, key, thisindex + 1));

}

/**
  * get_op_func - gets the operator function
  * @s: the operator
  *
  * Return: result
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	return (find_op_by_key(ops, s, 0).f);
	return (0);
}
