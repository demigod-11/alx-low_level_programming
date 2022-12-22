/**
 * cap_string - capitalizes all words of a string.
 * @s: string.
 * Return: string.
 */

char *cap_string(char *s)
{
	char *p;

	if (*s >= 'a' && *s <= 'z')
	{
		*s = *s - 'a' + 'A';
	}

	for (p = s + 1; *p != '\0'; p++)
	{
		if (*p == ' ' || *p == '\n'
		|| *p == '\t' || *p == ','
		|| *p == ';' || *p == '!'
		|| *p == '?' || *p == '"'
		|| *p == '(' || *p == ')'
		|| *p == '{' || *p == '}'
		|| *p == '.')
		{
			if (*(p + 1) >= 'a' && *(p + 1) <= 'z')
			{
				*(p + 1) = *(p + 1) - 'a' + 'A';
			}
		}
	}
	return (s);
}
