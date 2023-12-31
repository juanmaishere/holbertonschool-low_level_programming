#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int
sum_them_all(const unsigned int n, ...)
{
	int x = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
	return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	x += va_arg(args, int);
	}

return (x);

}
