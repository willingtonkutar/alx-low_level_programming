#include "main.h"

/**
 *sqrt_helper - Helper function to find the square root recursively
 *@n: The input integer
 *@guess: The current guess for the square root
 *Return: The square root of n
 */

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a function
 * @n: input integer
 * Return: The square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_helper(n, 1));
}
