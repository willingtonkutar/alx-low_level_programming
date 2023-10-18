#include "main.h"

/**
 * _atoi - Converts the given string to an integer
 * @s: the string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int let = 1;
	int result = 0;
	int m = 0;

	while (s[m] != '\0')
	{
	if (s[m] == '-')
	let = -let;
	if (s[m] >= '0' && s[m] <= '9')
		result = result * 10 + s[m] - '0';
	if (result != 0 && !(s[m] >= '0' && s[m] <= '9'))
		break;
	m++;
	}
	return (let * result);
}
