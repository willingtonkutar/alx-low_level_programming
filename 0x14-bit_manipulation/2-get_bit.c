#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number in which the bit is to be checked.
 * @index: The index of the bit to be retrieved, starting from 0.
 * Return: The value of the bit at the specified index or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
