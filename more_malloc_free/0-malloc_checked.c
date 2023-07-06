#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void
*malloc_checked(unsigned int b)
{

char *nt;


nt = malloc(sizeof(char) * b);
if (nt == (NULL))
{
exit(98);
}
return (nt);
}
