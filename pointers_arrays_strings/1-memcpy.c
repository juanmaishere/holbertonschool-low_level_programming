#include "main.h"

char
*_memcpy(char *dest, char *src, unsigned int n)
{

	while (n > 0)
	{
	if (*src != src[6] && *src != src[7])
		{
		*dest = *src;
		}
	n--;
	dest++;
	src++;
	}
return (dest);
}
