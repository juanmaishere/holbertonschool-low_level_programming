#include "main.h"

char
*string_toupper(char *s)
{
	int i;
	char *r = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
		r[i] = s[i] - 32;
		}
	}
return (r);
}
