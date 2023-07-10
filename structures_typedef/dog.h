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
	/**
	 *	 * @name: This is longer description of C
	 *		 *
	 *			 * Description: You can use paragraphs to describe arguments
	 *				 * using this method.
	 */
	float age;
	/**
	 *	 * @age: This is longer description of C
	 *		 *
	 *			 * Description: You can use paragraphs to describe arguments
	 *				 * using this method.
	 */
	char *owner;
	/**
	 *	 * @owner: This is longer description of C
	 *		 *
	 *			 * Description: You can use paragraphs to describe arguments
	 *				 * using this method.
	 */
} dog;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
