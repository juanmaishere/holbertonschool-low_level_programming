#include "main.h"

void
times_table(void)
{
int a = 0;
int b;
int pep, reg, reg2;

	for (a = 0; a <= 9; a++)
		{
		for (b = 0; b <	10; b++)
		{
		pep = b * a;
		if (pep >= 10)
			{
			reg = pep / 10;
			reg2 = pep % 10;
			_putchar(reg + '0');
			_putchar(reg2 + '0');
			_putchar(',');
			_putchar(' ');
			}
		else
		{
		_putchar(',');
		_putchar(' ');
		_putchar(pep + '0');
		}

		if ((b > 9) && (pep >= 10))
		{
		_putchar(',');
		_putchar(' ');
		}
		}
		_putchar('\n');
}
}
