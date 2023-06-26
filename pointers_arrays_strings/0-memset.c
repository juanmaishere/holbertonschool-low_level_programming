#include "main.h"

char
*_memset(char *s, char b, unsigned int n)
{	char f;
	f = n;
	while (n > 0)
	{
		*s = b;
	s++;
	n--;
	}
	return (s - f);
}
