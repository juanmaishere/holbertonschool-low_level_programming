#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{


	int *ml;
	unsigned int i;

	ml = malloc(sizeof(int) * nmemb);

	for (i = 0; i < nmemb; i++)
	{
	}
return (ml);

}
