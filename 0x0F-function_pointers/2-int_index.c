#include "function_pointers.h"
#include <stdio.h>
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array using comparison function
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: A pointer comparison function
 * Return: return 0, or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
