#include "main.h"


void
more_numbers(void)
{
	int a;
	int b;
	int rey, rei;

	for (b = 0; b <= 10; b++)
{
		for (a = 0; a <= 14; a++)
		{	rei = a;
			if (a >= 10)
			{
			rey = a / 10;
			rei = a % 10;
			_putchar(rey + '0');
			}
			_putchar(rei + '0');
		}
		_putchar('\n');
}

}
