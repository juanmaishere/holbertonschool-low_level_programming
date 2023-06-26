#include "main.h"

char
*_memcpy(char *dest, char *src, unsigned int n)
{	char block;
	block = n;

	while (n > 0)
	{
	*dest = *src;
	n--;
	dest++;
	src++;
	}
return (dest - block);
}
