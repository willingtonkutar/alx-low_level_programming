#include "main.h"

/**
 *array_range - creates an array of integers from min to max
 *@min: the minimum value
 *@max: the maximm value
 *Return: a pointerto the newly allocated memory
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *output;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		output[i] = min++;
	return (output);
}
