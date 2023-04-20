#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string printed  between strings
 * @n: number of strings passed to the function
 * Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int counter = n, i = 0;
	const char *spt = separator;
	const char *string;

	va_start(list, n);

	for (; i < counter; i++)
	{
		string = va_arg(list, const char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (spt != NULL && i != counter - 1)
			printf("%s", spt);
	}
	va_end(list);
	printf("\n");
}
