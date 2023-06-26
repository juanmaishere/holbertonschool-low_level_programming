#include "main.h"

char
*_memset(char *s, char b, unsigned int n)
{
	while (s && n > 0)
	{
		*s = b;
	s++;
	n--;
	}
	return (s);
}
