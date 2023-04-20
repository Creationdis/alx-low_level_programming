#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
unsigned int i;

va_start(num, n);

for (i = 0; i < n; i++)
{
	printf("%i", va_arg(num, int));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(num);

putchar('\n');
}

