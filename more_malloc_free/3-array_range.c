#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int
*array_range(int min, int max)
{

	int *nt;
	int c;

	nt = malloc(sizeof(int) * (max - min));

	if (nt == NULL)
	{
	return (NULL);
	}

	for (c = 0; c < (max - min); c++)
	{
	nt[c] = min + c;
	}
return (nt);

}
