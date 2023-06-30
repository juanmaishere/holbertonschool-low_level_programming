#include <stdio.h>

int
main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d", argc - 1);
	printf("\n");

	return (0);
}
