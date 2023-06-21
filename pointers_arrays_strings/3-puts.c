#include "main.h"

void
_puts(char *str)
{
do {
	_putchar(*str);
	str++;
} while (*str != '\0');
	_putchar('\n');
}
