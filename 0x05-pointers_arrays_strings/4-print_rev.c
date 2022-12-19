#include "main.h"
#include <stdio.h>

/**
* print_rev  - prints reverse of a  string and a new line.
* @s: string to print (*char)
* Return: void.
*/

void print_rev(char *s)
{
	int i, j;

	i = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
