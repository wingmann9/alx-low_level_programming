#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Dog to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Qwner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
