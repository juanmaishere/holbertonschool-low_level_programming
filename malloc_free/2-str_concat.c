#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char
*str_concat(char *s1, char *s2)
{
	char *nt;
	int i;

	if (s1 == (NULL) || s2 == (NULL))
	{
	return (NULL);
	}

	nt = malloc(strlen(s1) + strlen(s2) + 1);

	for (i = 0; s1[i] != '\0')
	{
	strcat(s1, s2);
	}
}


