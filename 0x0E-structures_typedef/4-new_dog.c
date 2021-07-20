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

	d = malloc(sizeof(name) * sizeof(owner));
	if (d == NULL)
		return NULL;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (d);
}
