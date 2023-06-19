#include "main.h"
/**
*void jack_bauer(void) - checks for a number
*
*Description:jack bauer movie joke
*Return: Absolut valuei.
*/
void
jack_bauer(void)
{
int i;
int b;

	for (i = 0; i <= 23; i++)
{
	for (b = 0; b <= 59; b++)
{
	_putchar (i / 10 + 48);
	_putchar ((i % 10) + 48);
	_putchar (':');
	_putchar (b / 10 + 48);
	_putchar ((b % 10) + 48);
	_putchar ('\n');
}
}


}
