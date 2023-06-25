#include "main.h"

char
*cap_string(char *z)
{
	int i;
	char *r = z;
	int p = 1;

	for (i = 0; z[i] != '\0'; i++)
	{

		if (z[i] >= 65 && z[i] <= 90)
		{
		p = 0;
		}

		if (p == 1)
		{
			if (z[i] >= 97 && z[i] <= 122)
			{
				r[i] = z[i] - 32;
			p = 0;
			}
		}



	if (p == 0)
	{
		if (z[i] >= 0 && z[i] <= 64)
		{
			p = 1;

		}
	}
	}
return (r);
}
