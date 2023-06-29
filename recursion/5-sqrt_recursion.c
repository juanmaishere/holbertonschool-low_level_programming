#include "main.h"

int
_recur(int a, int x)
{
	if (x * x == a)
	{
		return (x);
	}
	else if (x * x > a)
	{
		return (-1);
	}
	return (_recur(a, x + 1));
}
int
_sqrt_recursion(int n)
{
	return (_recur(n, 1));
}
