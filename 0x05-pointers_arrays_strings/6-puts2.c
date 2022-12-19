#include "main.h"
#include <stdio.h>

/**
* _puts  - prints a string and a new line.
* @str: string to print (*char)
* Return: void.
*/

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j+=2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
