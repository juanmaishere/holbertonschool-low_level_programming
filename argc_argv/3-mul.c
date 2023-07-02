#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int n = atoi(argv[2]);

	if (argc == 3)
	{
	printf("%d", x * n);
	printf("\n");
	}

	else if (argc != 3)
	{
		printf("Error");
			printf("\n");
	return (1);
	}

	return (0);
}
