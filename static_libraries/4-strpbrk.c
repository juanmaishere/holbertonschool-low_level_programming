#include "main.h"
#include <stddef.h>

char
*_strpbrk(char *s, char *accept)
{
	int len, len2;

	for (len = 0; s[len] != '\0'; len++)
	{
		for (len2 = 0; accept[len2] != '\0'; len2++)
		{
			if (s[len] == accept[len2])
			{
			return (&s[len]);
			}
		}
	}
return (NULL);
}
