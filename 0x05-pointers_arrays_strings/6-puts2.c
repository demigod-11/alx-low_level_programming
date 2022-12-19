#include "main.h"
#include <stdio.h>
/**
* puts2 - prints every other character of a string.
* @str: string to print (*char)
* Return: void.
*/

void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j+=2)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
