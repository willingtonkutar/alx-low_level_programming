#include <stdio.h>

/**
 *get_endianness - Checks the endianness of the system.
 *Return: 0 if big endian, 1
 */

int get_endianness(void)
{
	unsigned int test = 1;
	char *byte_ptr = (char *)&test;

	return (*byte_ptr);
}
