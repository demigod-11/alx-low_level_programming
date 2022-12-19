#include "main.h"
#include <stdio.h>

/**
* rev_string  - prints reverse of a  string and a new line.
* @s: string to reverse (char)
* Return: void.
*/

void rev_string(char *s)
{
	int i, j, l;
	char x;

	i = 0;
	j = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		i++;
	}

	l = i;

	while (j < l / 2)
	{
		x = s[j];
		s[j] = s[i];
		s[i] = x;
		i--;
		j++;
	}
}
