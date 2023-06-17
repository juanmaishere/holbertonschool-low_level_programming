#include "main.h"
/**
* main - check the code
* print_alphabet_x10(void) - writes the character c to stdout
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int main(void)
{
	char an;
	int lov;

for (lov = 0; lov <= 10; lov++)
{	_putchar('\n');
	for (an = 'a'; an <= 'z'; an++)
	{
		_putchar(an);
	}
}

}
