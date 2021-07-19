#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of dog has three elements
 * @name: name of dog
 * @age: Age of dog
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

 /*
  * d: struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;
#endif /* DOG_H */
