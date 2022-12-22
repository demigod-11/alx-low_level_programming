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

	while (i < n && scr[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
