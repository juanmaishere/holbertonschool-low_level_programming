#include "main.h"

int
_atoi(char *s)
{
int r;
int si = 1;
int rel = 0;
int nb = 0;

for (r = 0; s[r] != '\0'; r++)
{
	if (s[r] >= '0' && s[r] <= '9')
	{
		rel = (rel * 10) + (s[r] + '0');
	}

	else if (s[r] == '-')
	{
		si *= -1;
	}

	nb = (rel * si);
	break;
}


return (nb);
}
