#include "main.h"
/**
*int print_last_digit(int n) - checks for a number
*@n: n variable
*Description: returns absolut value
*Return: Absolut valuei.
*/
int
print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
	n =	n * -1;
	}
	 _putchar(n + 48);
		return (n);
}
