#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{


	char *ml;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
	return (NULL);
	}
	ml = malloc(size * nmemb);
	if (ml == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
	ml[i] = 0;
	}
return (ml);
}
