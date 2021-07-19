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
	if (d != NULL)
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	if (d == NULL)
		printf("(nil)");
}
