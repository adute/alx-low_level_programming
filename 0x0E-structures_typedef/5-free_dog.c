#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	free(d);
}
