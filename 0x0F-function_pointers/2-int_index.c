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
	if (array != NULL && cmp != NULL && size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
