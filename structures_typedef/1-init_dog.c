#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
void
init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog *dog;

	dog = d;

dog->name = name;
dog->age = age;
dog->owner = owner;
}
