#include "main.h"

char
*leet(char *s)
{
char nu[5] = "43071";
char le[5] = "aeotl";
int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{	/* recorro la string*/

		for (n = 0; nu[n] <= nu[5]; n++)
		{
			if (le[n] == s[i] || le[n] - 32 == s[i])
			{
			s[i] = nu[n];
			}
		}
	}
	return (s);
}

