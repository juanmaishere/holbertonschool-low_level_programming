#include "main.h"
#include <string.h>
#include <stdlib.h>

int
**alloc_grid(int width, int height)
{
int w, i;
int **nt;
		if (width <= 0 || height <= 0)
		{
		return (NULL);
		}
			if (!width || !height)
			{
			return (NULL);
			}
	nt = malloc(sizeof(int *) * width);
		if (nt == NULL)
		{
		return (NULL);
		}
		for (w = 0; w < width; w++)
		{
		nt[w] = malloc(sizeof(int) * height);

			for (i = 0; nt[w][i]; i++)
			{
			return (nt);
			}
		}
	return (nt);
}
