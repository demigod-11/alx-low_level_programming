#include "main.h"
#include <stdio.h>

/**
* _strlen  - find the length of a string
* @s: string (*char)
* Return: length of string.
*/

int _strlen(char *s)
{
	int i, j;

	i = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		i++;
	}

	return (i);
}
