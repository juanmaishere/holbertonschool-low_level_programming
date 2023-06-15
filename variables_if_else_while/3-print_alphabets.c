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
	char d;
		for (c = 'a'; c <= 'z'; ++c)
		{
			putchar(c);
		}
		for (d = 'A'; d <= 'Z'; ++d)
		{
			putchar(d);
		}
		putchar('\n');
return (0);
}
