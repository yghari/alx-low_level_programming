#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog_t object.
 * @d: Pointer to the dog_t object to free.
 *
 * Description: This function frees the memory allocated for the `name` and
 * `owner` character arrays of a dog_t object, and then frees the memory
 * allocated for the dog_t object itself. If `d` is NULL, the function does
 * nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
