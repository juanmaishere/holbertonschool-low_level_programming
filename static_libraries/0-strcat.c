#include "main.h"

char
*_strcat(char *dest, char *src)
{
char *word = dest;

	while (*word != '\0')
	{

	word++;
	}
/* word recorre la string de *dest y ahora igualamos a src, añado la string*/
	while (*src != '\0')
	{
	*word = *src;
	src++;
	word++;
	}

return (dest);
}
