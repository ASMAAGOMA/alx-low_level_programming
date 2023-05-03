#include "main.h"

/**
 * swap_int - a fuction that is used to swap two integars
 *
 * @a: pointer to the first integar
 * @b: pointer to the swcond integer
 *
 * a function used to swap two integars
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
