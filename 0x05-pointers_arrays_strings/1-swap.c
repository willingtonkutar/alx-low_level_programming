#include "main.h"

/**
 * swap_int - swaps the values of the integers
 * @a: parameter one used
 * @b: parameter two used
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
