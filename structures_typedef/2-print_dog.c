#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void
print_dog(struct dog *d)
{
	if (d == NULL)
	{}
	else
	{
		if (d->owner == NULL || d->name == NULL)
		{
		d->owner = "(nil)";
		d->name =  "(nil)";
		}

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
