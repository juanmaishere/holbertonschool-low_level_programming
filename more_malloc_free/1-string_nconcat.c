#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *al;
	unsigned int i, c;
	int j = 0;


	al = malloc(strlen(s1) + n + 1);

	if (al == NULL)
	{
		return (NULL);
	}
	c = strlen(s1);
	strcat(al, s1);

	for (i = 0; i < n; i++)
	{
	al[c + i] = s2[j];
	j++;
	}
	al[c + n] = '\0';
	free(al);

	return (al);

}
