#include <stdio.h>
/**
*int _islower(int c) - checks for upper and lowercases
*@c: int c
*Description: returns 1 or 0 depending on the if condition
*Return: Always 0.
*/
int
_islower(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
	else
		{
			return (0);
		}

}
