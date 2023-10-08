#include <stdio.h>

/**
 * main - function ofmain decsription
 *
 * Return: 0 on succeful
 */

int main(void)
{
	printf("size of char: %lu byte(S)", sizeof(char));
	printf("size of int: %lu bytes(S)", sizeof(int));
	printf("size of long int: %lu byte(S)", sizeof(long int));
	printf("size of long long int: %lu byte(S)", sizeof(long long int));
	printf("size of float: %lu byte(S)", sizeof(float));
	return (0);
}
