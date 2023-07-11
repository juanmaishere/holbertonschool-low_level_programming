#include "function_pointers.h"
#include <stdlib.h>

void
array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;
	
	if (array == NULL || action == NULL)
	{
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
