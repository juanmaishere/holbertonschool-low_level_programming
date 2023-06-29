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
	return (_recur(n, 1));
}
