#include "main.h"

unsigned int
_strspn(char *s, char *accept)
{
	int len, len2;
	int res = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		for (len2 = 0; accept[len2] != '\0'; len2++)
		{
			if (s[len] == accept[len2])
			{
			res++;
			break;
			}
		}
			if (s[len] != accept[len2])
			{
				return (res);
			}
	}
return (res);
}
