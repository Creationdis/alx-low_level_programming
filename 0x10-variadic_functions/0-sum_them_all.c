#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of variadic function
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
