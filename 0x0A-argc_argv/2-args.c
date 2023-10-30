#include <stdio.h>

/**
 * main - print all the argument given
 * @argc: argument count
 * @argv: argumrnt vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0  ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
