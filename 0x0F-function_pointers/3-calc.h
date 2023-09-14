#ifndef _CALC_H_
#define _CALC_H_

/**
 *op_add - function to add
 *@a: function parameter
 *@b: function parameter
 *Return: Always 0 (Success)
 *op_sub - function name
 *op_mul - function name
 *op_div - function name
 *op_mod - function name
 */

	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);
	int (*get_op_func(char *s))(int, int);
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

	typedef struct op
	{
		char *op;
		int (*f)(int a, int b);
	} op_t;
#endif
