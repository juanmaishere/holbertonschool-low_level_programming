#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char
*create_array(unsigned int size, char c)
{
	char *nt;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	nt = malloc(size * sizeof(char));

	if (nt == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	nt[i] = c;
	}

	return (nt);
}
