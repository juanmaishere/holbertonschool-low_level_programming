#include "main.h"

void
reverse_array(int *a, int n)
{
	int i, pa;
	int *inicio = a;
	int *fin = a + (n - 1);

	for (i = 0; i < n / 2; i++)
	{
	pa = *inicio;
	*inicio = *fin;
	*fin = pa;

	inicio++;
	fin--;
	}
}
