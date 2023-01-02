/**
* _strspn - function that gets the length of a prefix substring
* @s: bytes in initial segment.
* @accept: substring.
* Return: Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a = accept;

	while (*s != '\0')
	{
		while (*a != '\0')
		{
			if (*a == *s)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
