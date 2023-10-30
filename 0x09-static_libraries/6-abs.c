#include "main.h"

/**
 *_abs - main function used
 *@a: parameter function
 *Return: -a or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
