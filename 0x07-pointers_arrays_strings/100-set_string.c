#include "main.h"
/**
 *set_string - Sets the value of a pointer
 *@s: Pointer to a pointer
 *@to: Pointer to a char
 * Return: void (0)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
