#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints strings, followed by a new line.
 * @separator: the string printed  between strings
 * @n: number of strings passed to the function
 * Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list print;
unsigned int i;
char *cnt;
va_start(print, n);

for (i = 0; i < n; i++)
{
	cnt = va_arg(print, char*);
	if (cnt != NULL)
		printf("%s", cnt);
	else
		printf("(nil)");

	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(print);

putchar('\n');
}
