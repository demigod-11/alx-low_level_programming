#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: None.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	_putchar('\n');

}
