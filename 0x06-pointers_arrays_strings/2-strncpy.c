#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - a function that copies a string
 * @dest: pointer where the string is being coppied
 *@src: pointer containes the string to be coppied
 *@n: number of bytes
 *Return: Return a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strcpy(dest, src, n);
}
