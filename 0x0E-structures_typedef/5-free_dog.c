#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - that free dogs
 * @d: pointer
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		d = (dog_t *)malloc(sizeof(dog_t));
	free(d);
}
