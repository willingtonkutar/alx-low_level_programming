#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

 /**
  *array_iterator - execures function on each element array
  *@array: the used array
  *@size: size of array
  *@action: function to perfom on each element array
  *@array_iterator: executes a function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
