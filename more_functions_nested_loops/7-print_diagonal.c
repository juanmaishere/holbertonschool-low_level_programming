#include "main.h"
#include <stdio.h>

void
print_diagonal(int n)
{
	int spacio;
	int barra;

if (n > 0)
{
	for (barra = 0; barra < n; barra++)
	{
		for (spacio = 0; spacio < barra; spacio++)
		{
		putchar(' ');
		}
	putchar('\\');
	putchar('\n');
	}	
}
else
{
	_putchar('\n');
}
}
