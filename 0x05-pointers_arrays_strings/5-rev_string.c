#include "main.h"
#include <stdio.h>

/**
* rev_string  - prints reverse of a  string and a new line.
* @s: string to reverse (char)
* Return: void.
*/

void rev_string(char *s)
{
	int i, j, tmp, len;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;
	i--;

	while (j < len / 2)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
}
