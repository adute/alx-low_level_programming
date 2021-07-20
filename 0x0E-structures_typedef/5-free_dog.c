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
	dog_t *dog;
       
	dog = malloc(sizeof(d));
	if (dog == NULL)
		return;
	free(dog);
}
