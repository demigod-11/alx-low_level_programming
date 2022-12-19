#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i ,j;

	for (i = 0; src[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; j <= i ; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
