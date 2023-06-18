#include "main.h"
#include <ctype.h>
/**
*int _islower(int c) - Checks for lowercasesi
*
*Return: 0
*On error, 1 is returned, and error is set appropriately.
*
*/
int main(void)
{
char pep = 'c';

if (islower(pep))
	{
	_putchar(pep);
	}
	else
		{
		return (1);
		}
return (0);
}
