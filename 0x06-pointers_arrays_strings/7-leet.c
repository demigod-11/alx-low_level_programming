#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: string.
 */

char *leet(char *s)
{
	char *p;

	for (p = s; *p != '\0'; p++)
	{
		if (*p == 'a' || *p == 'A')
		{
			*p = '4';
		}
		else if (*p == 'e' || *p == 'E')
		{
			*p = '3';
		}
		else if (*p == 'o' || *p == 'O')
		{
			*p = '0';
		}
		else if (*p == 't' || *p == 'T')
		{
			*p = '7';
		}
		else if (*p == 'l' || *p == 'L')
		{
			*p = '1';
		}
	}
	return (s);
}
