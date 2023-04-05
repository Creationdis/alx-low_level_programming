#include "main.h"

/**
 * square - find square root
 * @a: int 
 * @b: int
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

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	 if (n == 0)

                return (0);


        return (square(n, 1));
}
