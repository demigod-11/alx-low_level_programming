#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _isalpha - check the code
 *  *@c: letter being tested
 * Return: Always 0.
 */

int _isalpha(int c)
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
		return (0);
	}
}
