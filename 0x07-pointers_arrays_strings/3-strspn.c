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

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				count++;
				break;
			}
		}
		if (!(*--accept))
		{
			break;
		}
		accept = a;
	}
	return (count);
}
