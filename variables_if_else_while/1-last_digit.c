#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - printf a string
 * Return: Always 0 Success
 */
int main(void)
{
	int n, q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	q = n % 10;

	if (q > 5)
	{ printf("Last digit of %i is %i and is greater than 5\n", n, q); }
	else if (q == 0)
	{ printf("Last digit of %i is %i and is 0\n", n, q); }
	else if (q < 6 && q != 0)
		{ printf("Last digit of %i is %i and is less than 6 and not 0\n", n, q); }
	return (0);
}
