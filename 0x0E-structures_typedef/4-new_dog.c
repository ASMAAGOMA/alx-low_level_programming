#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function to calculate the lenght of the string
 * @str: pointer indicates to the string
 * Return: the value of lenght
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
*_strcpy - function to copy the string
*@dest: the destination of the str
*@src: the str to be coppied
*Return: the value of dest
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/**
 *new_dog - a function that creates a new dog
 *@name: new name
 *@age: new age
 *@owner: the owner
 *Return: NULL(failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NEWDOG;
	int ownerlen = 0;
	int namelen = 0;

	ownerlen = _strlen(owner);
	namelen = _strlen(name);

	NEWDOG = malloc(sizeof(dog_t));

	if (NEWDOG == NULL)
		return (NULL);
	NEWDOG->name = malloc(sizeof(char) * (namelen + 1));
	if (NEWDOG->name == NULL)
	{
		free(NEWDOG);
		return (NULL);
	}
	NEWDOG->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (NEWDOG->owner == NULL)
	{
		free(NEWDOG);
		free(NEWDOG->name);
		return (NULL);
	}
	_strcpy(NEWDOG->name, name);
	_strcpy(NEWDOG->owner, owner);
	NEWDOG->age = age;

	return (NEWDOG);
}
