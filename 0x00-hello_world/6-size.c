#include <stdio.h>

/**
 * main - function ofmain decsription
 *
 * Return: 0 on succeful
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size a of char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(S)\n", (unsigned long)sizeof(e));
	return (0);
}
