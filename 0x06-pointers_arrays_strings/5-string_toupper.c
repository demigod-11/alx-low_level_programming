#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letter
 * of a string to uppercase.
 *@s: pointer to string.
 * Return: n (uppercase string).
 */

char *string_toupper(char *s)
{
	char *p;

	for (p = s; *p != '\0'; p++)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 'a' + 'A';
		}
	}
	return (s);
}
