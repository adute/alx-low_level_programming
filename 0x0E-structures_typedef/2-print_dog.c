#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	if (d == NULL)
	exit(1);
	else
	{
	d->name = name;
	(*d).age = age;
	d->owner = owner;
	}
}

/**
 * print_dog - prints struct dog
 * @d: pointer
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
	{
	printf("%s\n", "Name: (nil)");
	}
	else
	if (d->age == 0)
	{
	printf("%s\n", "Age: (nil)");
	}
	else
	if (d->owner == NULL)
	{
	printf("%s\n", "Owner: (nil)");
	}
	else
	{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
