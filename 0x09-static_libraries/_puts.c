#include "main.h"
#include "main.h"

/**
 *_puts - prints a string to stdout
 *
 *@s: string to print
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
}
