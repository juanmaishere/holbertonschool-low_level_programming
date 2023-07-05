#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char
*str_concat(char *s1, char *s2)
{
	char *nt;

	if (s1 == (NULL) || s2 == (NULL))
	{
	return (NULL);
	}

	nt = malloc(strlen(s1) + strlen(s2) + 1);

	if (nt == NULL)
	{
	return (NULL);
	}

	strcat(nt, s1);
	strcat(nt, s2);

	return (nt);
}


