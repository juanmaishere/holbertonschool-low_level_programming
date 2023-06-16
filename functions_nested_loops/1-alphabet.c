#include "main.h"

/**
* main - writes the character c to stdout
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int main(void)
{
	char an;

	for (an = 'a'; an <= 'z'; an++)
	{
		_putchar(an);
	}
	_putchar('\n');
	return (0);
}
