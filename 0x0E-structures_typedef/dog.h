#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - A new type struct describing a dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of the dog.
 *
 * Description: struct dog defines the attribute of a poppy such as:
 *		its name, its age and the name of the owner.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
