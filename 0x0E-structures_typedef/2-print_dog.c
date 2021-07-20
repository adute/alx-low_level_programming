#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - it prints a struct dog
 * @d: pointer
 *
 * Return - void
 */
void print_dog(struct dog *d)
{
	d = (dog *)malloc(sizeof(dog));
	if (d == NULL)
		return;
	if (d != NULL)	
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	else
		printf("(nil)");
}
