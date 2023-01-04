#include "main.h"

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n == 1)
	{
		return (n);
	}

	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}

	return (-1);
}
