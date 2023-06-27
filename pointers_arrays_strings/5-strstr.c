#include "main.h"
#include <stddef.h>

char
*_strstr(char *haystack, char *needle)
{
	int id, gg;

	for (id = 0; haystack[id] != '\0'; id++)
	{
		for (gg = 0; needle[gg] != '\0'; gg++)
		{
		if (haystack[id] != needle[gg])
		{
		break;
		}
		id++;
		}
	if (needle[gg] == '\0')
	{
		return (&haystack[id - gg]);
	}
	}
return (NULL);
}
