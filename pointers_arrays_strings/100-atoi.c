#include "main.h"

int
_atoi(char *s)
{
int r;
int si = 1;
int nb = 0;
int be = 0;

for (r = 0; s[r] != '\0'; r++)
{
	if (s[r] >= '0' && s[r] <= '9')
	{
		nb = (s[r] * 10);
		r++;
		be = nb + (s[r] - '0');
	}

	else if (s[r] == '-')
	{
		si *= -1;
	}
	nb *= si;

}


return (be);
}
