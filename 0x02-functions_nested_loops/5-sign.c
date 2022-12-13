#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_sign - check the code
 *  *@c: letter being tested
 * Return: Always 0.
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
