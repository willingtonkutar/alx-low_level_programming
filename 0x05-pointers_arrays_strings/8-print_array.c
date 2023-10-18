#include "main.h"

/**
 * print_array - print nelements of an array in integers
 * @a: used array
 * @n: used function
 * Return: voidnumber of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
