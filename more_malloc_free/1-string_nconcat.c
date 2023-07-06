#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *al;
	unsigned int i, c;

	al = malloc(strlen(s1) + n + 1);

	if (al == NULL)
	{
		return (NULL);
	}

	c = 0;
	while (s1[c] != '\0')
	{
	al[c] = s1[c];
	c++;
	}

	for (i = 0; i < n; i++)
	{
	al[c] = s2[i];
	c++;
	}
	al[c] = '\0';

	return (al);

}
