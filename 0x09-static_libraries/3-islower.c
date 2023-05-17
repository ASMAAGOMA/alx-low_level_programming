#include "main.h"

/**
 *islower - checks if a character is lowercase
 *@c: the character to check
 *
 *Return: 1 if c is lowercase, 0 otherwise
 */

int islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
