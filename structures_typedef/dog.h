#include <stdio.h>
#ifndef dog_h
/**
struct my_struct - Short description
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *
 *Description: doggo structure
 */
struct dog
{
	char* name;
	/**
	 *	 * @name: This is longer description of C
	 *		 *
	 *			 * Description: You can use paragraphs to describe arguments
	 *				 * using this method.
	 *					 */
	float age;
	/**
	 *	 * @age: This is longer description of C
	 *		 *
	 *			 * Description: You can use paragraphs to describe arguments
	 *				 * using this method.
	 *					 */
	char* owner;
	/**
	 *	 * @owner: This is longer description of C
	 *		 *
	 *			 * Description: You can use paragraphs to describe arguments
	 *				 * using this method.
	 *					 */
}dog;
#endif
