#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: source
 * @dest: destination
 * @n: number.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	int i = 0;

	while (i < n && *src != '\0')
	{
		*p = *src;
		p++;
		src++;
		i++;
	}
	*p = '\0';
	return (dest);
}
