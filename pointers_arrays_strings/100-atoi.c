#include "main.h"

int
_atoi(char *s)
{
int r;
int si = 1;
int rel, pel, nb;

for (r = 0; s[r] != '\0'; r++)
{
	if (s[r] >= '0' && s[r] <= '9')
	{
		rel = (s[r] * 10);
	}

	if (s[r] == 45)
	{
		si *= -1;
	}

	pel = rel + (s[r++] - '0');
	nb = pel * si;
}


return (nb);
}
