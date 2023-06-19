#include "dog.h"

/**
 * init_dog - function that initialisez a variable of type struct dog
 * @d: pointer to access the elements of struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
