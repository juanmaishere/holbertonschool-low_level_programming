#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operador;

	if (argc != 4)
		{
		printf("Error\n");
		exit(98);
		}

	num1 = atoi(argv[1]);
	operador = argv[2];
	num2 = atoi(argv[3]);

	if ((*operador == '/' || *operador == '%') && num2 <= 0)
	{
	printf("Error\n");
	exit(100);
	}
	if (argv[2] != operador)
	{
	printf("Error\n");
	exit(99);
	}


	result = get_op_func(operador)(num1, num2);
	printf("%d", result);
	printf("\n");
return (0);
}
