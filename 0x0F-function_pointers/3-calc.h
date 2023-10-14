#ifndef _H_CALC_
#define _H_CALC_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;

	int (*f)(int a, int b);
} op_t;

int op_plus(int a, int b);
int op_minus(int a, int b);
int op_times(int a, int b);
int op_break(int a, int b);
int op_remainder(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* _H_CALC_ */