#include "main.h"
void
print_line(int n)
{
	int b;

	b = 0;
	if (n > 0)
	{
	do {
	_putchar('_');
		b++;
	} while (b < n);
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}




}

