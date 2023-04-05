#include "main.h"

/**
 * is_prime_number_helper - helper for finding prime
 * @n: int
 * @val: int
 *
 * Return: int
 *
 */
int is_prime_number_helper(int n, int val)
{
	if (n <= 1)
		return (0);
	if (n % val == 0)
		return (0);
	if (val == 2 && n % val != 0)
		return (1);

	return (is_prime_number_helper(n, val - 1));
}

/**
 * is_prime_number - returns 1 if the input is a prime number, otherwise 0
 * @n: int, number
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, n - 1));
}
