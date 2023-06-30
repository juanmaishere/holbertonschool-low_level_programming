#include "main.h"

char
*_strncat(char *dest, char *src, int n)
{
	char *word = dest;

	while (*word != '\0')
	{

	word++;
	}
/* word recorre la string de *dest y ahora igualamos a src, añado la string*/
		while (*src != '\0' && n > 0)
		{
		*word = *src;
		src++;
		word++;
		n--;
		}
	*word = '\0';
return (dest);
}
