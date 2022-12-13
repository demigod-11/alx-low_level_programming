#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = -c;
		_putchar(c % 10);
		return (c % 10);
	}
	return (c % 10);
}
