#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything passed to it
 *
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char *str;
	char *separator = "";
	unsigned int i = 0;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("%s(nil)", separator);
				}
				else
				{
					printf("%s%s", separator, str);
				}
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
