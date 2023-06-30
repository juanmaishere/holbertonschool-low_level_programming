#include "main.h"

char
*_memcpy(char *dest, char *src, unsigned int n)
{
	char *ori = dest;

	while (n > 0)
	{
	*dest = *src;
	n--;
	dest++;
	src++;
	}
return (ori);
}
