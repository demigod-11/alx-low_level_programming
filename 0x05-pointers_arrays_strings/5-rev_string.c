#include "main.h"
#include <stdio.h>

/**
* rev_string  - prints reverse of a  string and a new line.
* @s: string to reverse (char)
* Return: void.
*/

void rev_string(char *s);
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
