#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - printf a string
 * Return: Always 0 Success
 */
int main(void)
{
	int n;
	int a;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
	putchar(a);
	}
	putchar('\n');
return (0);
}
