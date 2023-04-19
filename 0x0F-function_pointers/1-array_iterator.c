#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function executes a function on array
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 * Return: 0
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)

		for (x = 0; x < size; x++)
		{
			action(*array),
				array++;
		}
}
