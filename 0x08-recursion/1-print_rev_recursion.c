#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print reverse string.
 * @s: pointer to char
 * Return: Void.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);
}
