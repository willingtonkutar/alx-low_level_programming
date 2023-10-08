#include <unistd.h>

/**
 * main - prints the exact input
 *
 * Return: alway 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\r", 59);
	return (1);
}
