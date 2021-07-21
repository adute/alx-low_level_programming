#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that initialize a variable type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
