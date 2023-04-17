#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct dog - a dog struct that contains some elements
 * @name: a pointer to a character array that represents the name of the dog
 * @age: a float that represents the age of the dog.
 * @owner: a pointer to a character array that represents the name of the owner
 * of the dog.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
