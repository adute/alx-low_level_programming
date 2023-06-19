#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that cretes dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(d));

	if (d == NULL)
	return (NULL);
	d->name = name;
	(*d).age = age;
	d->owner = owner;
	return (d);
}
