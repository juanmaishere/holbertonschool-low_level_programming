#include "main.h"

unsigned int
binary_to_uint(const char *b)
{
	int res = 0, i = 0, o = 0;
	char *c;

	if (b == NULL)
		return (0);

	c = malloc(strlen(b) + 1);
	if (c == NULL)
	{
	return (0);
	}
	while (b[i] != '\0')
	{
	c[i] = b[i];
	i++;
	}
	reverser(c);
	while (c[o] != '\0')
	{
		if (c[o] != '1' && c[o] != '0')
		{
		return (0);
		}
		if (c[o] == '1')
		{
		res += 1 << o;
		}
	o++;
	}
return (res);
}
void
reverser(char *str)
{
	char temp;
	int left = 0;
	int right = strlen(str) - 1;

	while (left < right)
	{
	temp = str[left];
	str[left] = str[right];
	str[right] = temp;

left++;
right--;
}
}
