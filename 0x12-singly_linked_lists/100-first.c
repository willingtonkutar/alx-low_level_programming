#include <stdio.h>
/**
 * print-before-main - it prints the specified text that is before the main function
 */

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * main - the main function used
 * Return: always return o
 */
int main(void)
{
	print_before_main();
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
