#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	int i, n;
	int res = 0;


	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n]; n++)
		{
			if (argv[i][n] < '0' || argv[i][n] > '9')
			{
			printf("Error\n");
			return (1);
			}
		}
	res += atoi(argv[n]);
	}
	printf("%d\n", res);
return (0);
}
