#ifndef DOG_H
#define DOG_H
#include "main.h"
#include <string.h>

/**
 * struct dog - new type struct
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 */

struct dog
{
	char *name[20];
	float age;
	char *owner[20];
};

#endif
