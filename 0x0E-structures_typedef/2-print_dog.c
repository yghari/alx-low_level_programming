#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog variable
 * @d: Pointer to the struct dog variable to print
 *
 * Description: This function prints the contents of a struct dog variable,
 * including its name, age, and owner members. If any of these members are
 * NULL or 0, the function prints "nil" instead of the missing value.
 */

void print_dog(struct dog *d)
{
	if (d->owner == NULL)
		return(printf("nil"));
	if (d->name == NULL)
		return(printf("Name : (nil)"));
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
