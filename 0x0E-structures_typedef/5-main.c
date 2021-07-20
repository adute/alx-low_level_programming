#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for ALX students.
 *
 * Return: always 0
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - woof!\n", my_dog->name,	my_dog->age);
	free_dog(my_dog);
	return (0);
}
