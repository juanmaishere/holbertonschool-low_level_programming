#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Short description
 * @
 * @d: pointer to struct
 *
 * Description: Longer description
 */
void free_dog(dog_t *d)
{
	dog_t *t = d;


	if (d == NULL)
	{
	}
	else
	{
		free(t->name);
		free(t->owner);
		free(t);
	}

}
