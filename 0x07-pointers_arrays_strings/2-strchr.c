#include "main.h"

/**
* _strchr - Function that locates a character in a string
* @s: pointer to char
* @c: char params to find
* Return: *S
*/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
