#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything.
 * @format: argument
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, num;
	char c;
	char *s;
	float f;

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s != NULL)
				printf("%s", s);
			else
				 printf("(nil)");
		}
		if (format[i + 1] != '\0' &&
				(format[i] == 'c' ||
				 format[i] == 'i' ||
				 format[i] == 'f' ||
				 format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
