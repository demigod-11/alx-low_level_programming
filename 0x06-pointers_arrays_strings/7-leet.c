#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: string.
 */

char *leet(char *s)
{
	int i;
	int j;
	int k;

	char l[] = "oOlLeEaAtT";
	char m[] = "0011334477";

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = m[k];
			}
			j++;
		}
		i++;
	}

	return (s);
}
