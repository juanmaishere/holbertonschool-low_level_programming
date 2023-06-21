#include "main.h"

void
print_rev(char *s)
{
int largo = 0;

while (s[largo] != '\0')
{
	largo++;
}
while (largo > 0)
{
	_putchar(s[largo]);
	largo--;
}
	_putchar('\n');
}

