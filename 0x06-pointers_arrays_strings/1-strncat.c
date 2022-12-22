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
	int i, j;

	i = 0;
	j = strlen(dest);

	while (i < n && *src != '\0')
	{
		dest[j + i] = *src;
		src++;
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
