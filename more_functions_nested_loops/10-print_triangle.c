#include "main.h"
#include <stdio.h>

void
print_triangle(int size)
{
	int spacio;
	int barra;

if (size > 0)
{
	for (barra = 0; barra < size; barra++)
	{
		for (spacio = 0; spacio > barra; spacio++)
		{
		putchar(' ');
		}
	putchar('#');
	putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
