#include "main.h"

/**
 *_isalpha - both upper case and lowercase
 *@c: function parameter used
 *Return: 1 r 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
