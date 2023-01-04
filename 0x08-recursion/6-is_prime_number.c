/**
 * is_prime_number - prime
 * @n: integer params
 * Return: integer
 */


int is_prime_number(int n)
{
	int result;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	result = is_prime_number_helper(n, 2, (int) sqrt(n));
	return (result);
}

/**
 * is_prime_number_helper - helper
 * @n: integer params
 * @low: integer
 * @high: integer
 * Return: integer
 */

int is_prime_number_helper(int n, int low, int high)
{
	if (low > high)
		return (1);
	if (n % low == 0)
		return (0);
}
