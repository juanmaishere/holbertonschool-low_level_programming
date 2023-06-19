#include "main.h"
/**
*int print_sign(int n) - checks for a number , if it is positive negative or 0
*@n: int n
*Description: returns 1 or 0 depending on the if condition
*Return: Always 0.
*/
int
print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
	else
		{
		_putchar('0');
		return (0);
		}
}
