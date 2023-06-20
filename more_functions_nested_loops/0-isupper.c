#include "main.h"
/**
* print_alphabet - writes the character c to stdout
*@c: Int c
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int
_isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
