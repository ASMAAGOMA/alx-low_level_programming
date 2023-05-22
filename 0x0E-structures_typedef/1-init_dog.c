#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer to struct dog type
 * @name: pointer to the name of the dog
 * @age: pointer to the age of the dog
 * @owner: pointer to the name of the owner
 * Return: NULL(failure)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		return (NULL);
	}
}
