#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of a and b.
 * @a: first integer
 * @b: second integer
 * Return: result of the addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns difference of a and b.
 * @a: first integer
 * @b: second integer
 * Return: result of the subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns product of a and b.
 * @a: first integer
 * @b: second integer
 * Return: result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns result of the division of a by b.
 * @a: dividend
 * @b: divisor
 * Return: result of the division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder the division of a by b.
 * @a: dividend
 * @b: divisor
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
