#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - fuction to select the correct func
 * @s: char
 *
 * Return:int
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};

	for (i = 0; i < 5; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}

	return (0);
}
