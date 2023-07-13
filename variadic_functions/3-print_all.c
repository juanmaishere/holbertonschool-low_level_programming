#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void
print_all(const char * const format, ...)
{
	int i = 0;
	char *x;
	va_list args;
	char *l = ", ";

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
		case 'c':
			printf("%c%s", va_arg(args, int), l);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), l);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), l);
			break;
		case 's':
			x = va_arg(args, char*);
			if (x == NULL)
			{
				x = "(nil)";
			}
			printf("%s", x);
			break;
	}
	i++;
	}
	printf("\n");
	va_end(args);
}
