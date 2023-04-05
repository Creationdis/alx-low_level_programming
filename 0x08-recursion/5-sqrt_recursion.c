#include "main.h"

/**
 * _sqrt_recursion_helper - helper for finding sqrt, recursion
 * @n: int, number for finding sqrt
 * @val: int, squar root
 *
 * Return: int
 *
 */
int _sqrt_recursion_helper(int n, int val)
{
	if (n == 0 || n == 1)
		return (1);
	if (n == val || n < 0)
		return (-1);
	if (val * val == n)
		return (val);

	return (_sqrt_recursion_helper(n, val + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int, number
 *
 * Return: int, returns the sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
