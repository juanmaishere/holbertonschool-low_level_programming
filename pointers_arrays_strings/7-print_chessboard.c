#include "main.h"
#include <stdio.h>

void
print_chessboard(char (*a)[8])
{
	int i;
	int b;
	char el;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
		{
		el = a[i][b];
		printf("%c", el);
		}
		printf("\n");
	}
}
