#include "main.h"

/**
 * factorial - factorial n
 * @n: integer
 * Return: integern
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
