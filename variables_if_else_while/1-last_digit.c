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
	int q = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (q > 5)
	{
	printf("Last digit of %i is %i and is greater than 5", n, n % 10);
	}
	else if (q < 6 && q != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, q);
	}
	else if (q == 0)
	{
		printf("Last digit of %i is %i and is 0", n, q);
	}
	return (0);
}
