#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - printf a string
 * Return: Always 0 Success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
{
	if (c != 'e')
	{
	if (c != 'q')
		{
		putchar(c);
		}
	}
}
	putchar('\n');
return (0);
}
