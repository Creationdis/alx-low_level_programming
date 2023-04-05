#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - check square root
 * @a: int to find square root
 * @b: square root
 * Return: int
 */

int square(int a, int b)
{

	if (a * a == b)
		return (a);
	else if (a * a < b)
		return  (square(b, a + 1));
	else
		return (-1);

}
