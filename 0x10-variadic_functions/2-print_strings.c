#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *string;
	unsigned int i;

	i = 0;
	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);

		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
		printf("\n");
		va_end(strings);
}
