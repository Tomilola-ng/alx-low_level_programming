#include "3-calc.h"

/**
 * get_op_func - PTR to corresponding func
 * @s: ptr to expression
 * Return: results or 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_plus},
		{"-", op_minus},
		{"*", op_times},
		{"/", op_break},
		{"%", op_remainder},
		{NULL, NULL}
	};
	int counter;

	counter = 0;
	while (ops[counter].op != NULL)
	{
		if (s[0] == ops[counter].op[0])
		{
			return (ops[counter].f);
		}
		counter++;
	}
	return (ops[counter].f);
}