#include "main.h"

/**
 * _strncpy -  function that copies a string..
 * @src: source
 * @dest: destination
 * @n: number.
 * Return: void
 */


char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (dest);
}
