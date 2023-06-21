#include "main.h"
#include <stdio.h>

void
print_square(int size)
{
	int hash;
	int barra;

if (size > 0)
{
	for (barra = 0; barra < size; barra++)
	{
		for (hash = 0; hash < size; hash++)
		{
		putchar('#');
		}
	putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
