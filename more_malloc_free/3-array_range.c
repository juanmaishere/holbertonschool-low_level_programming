#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int
*array_range(int min, int max)
{

	int *nt;
	int c;

	if (min > max)
	{
	return (NULL);
	}

	nt = malloc(sizeof(int) * (max - min + 1));

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
