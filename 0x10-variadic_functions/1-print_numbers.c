#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers passed to it, followed by a newline
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
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
