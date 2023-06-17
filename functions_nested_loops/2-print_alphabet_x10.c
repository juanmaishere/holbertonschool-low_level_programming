#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet
 *
 *Description: Prints 10 times
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char an;
	int lov;

for (lov = 0; lov <= 10; lov++)
{
	for (an = 'a'; an <= 'z'; an++)
	{
		_putchar(an);
	}
	 _putchar('\n');
}
return;
}
