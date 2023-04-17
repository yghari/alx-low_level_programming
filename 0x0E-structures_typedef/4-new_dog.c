#include "dog.h"
/**
 * _strlen - calcul lent of a str
 * @s: the string
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * *_strcpy - pointer to funtion that copy a string to another destination
 * @dest: the destination
 * @src: the string
 *
 * Return: return the dest that contains the value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - Creates a new dog_t object
 * @name: Pointer to the character array representing the dog's name
 * @age: Float representing the age of the dog
 * @owner: Pointer to the character array representing the owner's name
 *
 * Description: This function creates a new dog_t object and allocates memory
 * for its name and owner members. If the memory allocation fails, the function
 * returns NULL. The function returns a pointer to the new dog_t object if
 * successful.
 *
 * Return: Pointer to the new dog_t object, or NULL if memory allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(_strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	_strcpy(newdog->name, name);
	newdog->owner = malloc(_strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	_strcpy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}
