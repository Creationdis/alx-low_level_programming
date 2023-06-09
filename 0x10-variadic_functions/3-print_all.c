#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Write a function that prints anything
 * c = char, i = int, f = float, s = char * (if null print (nil))
 *@format: is a list of types of arguments
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	char *separator = ", ";
	char *str;
	int i = 0, j = 0;

	va_list ap;

	va_start(ap, format);
	while (format && format[j])
		j++;
	while (format && format[i])
	{
		if (i == j - 1)
			separator = "";
		switch (format[i])
		{
			case ('c'):
				printf("%c%s", va_arg(ap, int), separator);
				break;
			case ('i'):
				printf("%d%s", va_arg(ap, int), separator);
				break;
			case ('f'):
				printf("%f%s", va_arg(ap, double), separator);
				break;
			case ('s'):
				str = va_arg(ap, char *);
				if (!str)
				{
					printf("(nil)%s", separator);
					break;
				}
				printf("%s%s", str, separator);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
