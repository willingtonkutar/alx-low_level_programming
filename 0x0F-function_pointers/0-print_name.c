#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - prints name
 * @name: name to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
