#include "main.h"
/**
*int _abs(int) - checks for a number , if it is positive negative or 0
*@n: chari n
*Description: returns absolut value
*Return: Absolut valuei.
*/
int 
_abs(int n)
{

if (n < 0)
	{
	return (n * -1);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
