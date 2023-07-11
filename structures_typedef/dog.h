#ifndef dog_h
#define dog_h
/**
 *struct dog - Short description
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *
 * Description: doggo structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
