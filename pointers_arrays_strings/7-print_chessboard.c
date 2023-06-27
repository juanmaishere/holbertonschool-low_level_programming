#include "main.h"

void
print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; a[i] != a[8]; i++)
	{
	_putchar(a);
	}
}
