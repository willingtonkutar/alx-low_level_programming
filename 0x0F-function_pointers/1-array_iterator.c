#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

 /**
  * array_iterator - execures function on each element array
  * @array: the used array
  * @size: size of array
  * @action: function to perfom on each element array
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
