#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator:  is the string to be printed between numbers
 * @n: argument
 * Return: arg(success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	num = 0;
	i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}


