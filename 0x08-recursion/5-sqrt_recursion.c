#include "main.h"

/**
 * _sqrt_recursion - main function
 * @n: int n
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n, 1));
}

/**
 * _sqrt_recursion - _sqrt_recursion
 * @n: integer paramter
 * @i: integer parameter
 * Return: sqrt
 */

int _sqrt_recursion(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
