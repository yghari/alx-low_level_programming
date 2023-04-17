#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to the character array representing the dog's name
 * @age: Float representing the age of the dog
 * @owner: Pointer to the character array representing the owner's name
 *
 * Description: This function initializes the values of a struct dog variable
 * by setting its name, age, and owner members to the values provided as
 * arguments.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
