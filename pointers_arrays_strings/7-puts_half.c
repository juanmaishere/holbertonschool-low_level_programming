#include "main.h"

void
puts_half(char *str)
{
int i, l, p, n;

	l = 0;

	for (p = 0; str[p] != '\0'; p++)
	{
		l++;
	}

	if (l % 2 == 0)
	{
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= l / 2)
		{
			_putchar(str[i]);
		}
	}
	}
	else
	{
	n = (l - 1 / 2);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= n + 1)
		{
			_putchar(str[i]);
		}
	}
	}
	_putchar('\n');
}
