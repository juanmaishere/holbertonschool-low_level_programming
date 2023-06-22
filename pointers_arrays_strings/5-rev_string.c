#include "main.h"

void
rev_string(char *s)
{
char *largo = s;
char *pep = s;
char *pa;

while (*largo != '\0')
{
	largo++;
	s++;
}
largo--;

while (pep < largo)
{
	pa = pep;
	*pep = *largo;
	*largo = *pa;
	s++;
	largo--;
	pep++;
}
}


