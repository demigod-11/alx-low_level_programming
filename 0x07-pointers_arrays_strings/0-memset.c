#include "main.h"

/**
* _memset - Function name
* @s: pointer to char parameter
* @b: data to change
* @n: index
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
