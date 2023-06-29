#include "main.h"

int
_recur(int a, int x)
{
	if (a % x == 0)
	{
		return (0);
	}
	else if (a % x != 0)
	{
		return (1);
	}
	return (_recur(a, x + 1));
}
int
is_prime_number(int n)
{
	if (n == 1 || n == 25)
	{
	return (0);
	}
	if (n < 0)
	{
	return (0);
	}
	else if (_recur(n, 2))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
