#include "main.h"
/**
* print_alphabet - writes the character c to stdout
*@c: Int c
* Return: On success 1.
* On digit return 1 on lettercases return 0
*/
int
_isdigit(int c)
{

	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
