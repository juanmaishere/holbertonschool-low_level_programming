#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Struct that create new dog
 *
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *Description: dogggo doggo doggo
 *Return: A new doggo
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len = 0;
	int len2 = 0;
	int i, d;

	dog_t *nwdog;

	nwdog = malloc(sizeof(dog_t));
	if (nwdog == NULL)
		{
		return (NULL);
		}
	while (name[len] != '\0')
	{
		len++;
	}
	while (owner[len2] != '\0')
	{
		len2++;
	}
	nwdog->name = malloc(sizeof(char) * len + 1);
	if (nwdog->name == NULL)
	{
		free(nwdog);
		return (NULL);
	}
	nwdog->owner = malloc(sizeof(char) * len2 + 1);

	if (nwdog->owner == NULL)
	{
		free(nwdog->name);
		free(nwdog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
	nwdog->name[i] = name[i];
	}
	for (d = 0; owner[d] != '\0'; d++)
	{
	nwdog->owner[d] = owner[d];
	}
	nwdog->age = age;
	return (nwdog);
}
