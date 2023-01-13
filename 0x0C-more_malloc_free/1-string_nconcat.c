#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: address or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	char *concat_str = malloc(s1_len + n + 1);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	strcpy(concat_str, s1);
	strncat(concat_str, s2, n);

	return (concat_str);
}
