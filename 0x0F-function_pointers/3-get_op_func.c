#include "3-calc.h"


/**
 * get_op_func - Returns a pointer to the function to the operator.
 * @s: operator
 * Return: A pointer to the function, or NULL
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

	while (ops[i].op)
	{
		if (*s == *ops[i].op && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
	return (NULL);
}
