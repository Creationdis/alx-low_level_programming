#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that  prints a name
 * @name: the name
 * @f: the function of the name
 * Return: 0
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
