#include "main.h"

void
puts_half(char *str)
{
int i, l, p;

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


		for (i = 0; str[i] != '\0'; i++)
	{
			if (i >= (l / 2) - 1)
			{
			_putchar(str[i]);
			}
	}
	}
	_putchar('\n');
}
