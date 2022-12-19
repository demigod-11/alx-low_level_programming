#include "main.h"
#include <stdio.h>

/**
* puts_half  - prints a string and a new line.
* @str: string to print (*char)
* Return: void.
*/

void puts_half(char *str)
{
	int j;
	int n;

	for (j = 0; str[j] != '\0'; j++)
	{
		;
	}

	if (j % 2 != 0)
	{
		n = (j - 1) / 2;
	}
	else
	{
		n = j / 2;
	}

	for (j = n - 1; str[j] != '\0'; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
