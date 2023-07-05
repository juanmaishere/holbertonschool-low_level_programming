#include "main.h"
#include <string.h>
#include <stdlib.h>

int
**alloc_grid(int width, int height)
{
int w = 0;
int i = 0;
int **nt = NULL;

		if (width <= 0 || height <= 0)
		{
		return (NULL);
		}
			if (!width || !height)
			{
			return (NULL);
			}

			nt = malloc(sizeof(int *) * height);

		if (nt == NULL)
		{
		return (NULL);
		}
			for (w = 0; w < height; w++)
			{
			nt[w] = malloc(sizeof(int) * width);

			while (i < width)
				{
				nt[w][i] = 0;
				i++;
				}
			}

return (nt);
}
