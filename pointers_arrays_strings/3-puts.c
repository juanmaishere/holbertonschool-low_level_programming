#include "main.h"

void
_puts(char *str)
{
if (*str != '\0')
{
	do {
		_putchar(*str);
		str++;
}	while (*str != '\0');

	_putchar('\n');
}
}

