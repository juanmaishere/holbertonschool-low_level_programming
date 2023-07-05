#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char
*_strdup(char *str)
{
	char *nt;
	int i;

	if (str == (NULL))
	{
	return (NULL);
	}
	nt = malloc(strlen(str) + 1);

	if (nt == (NULL))
	{
	return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	nt[i] = str[i];
	}

return (nt);
}
