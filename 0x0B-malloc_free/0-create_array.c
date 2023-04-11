#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: char
 *
 * Return: Returns NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	array = (char *)malloc(sizeof(char) * size);
	if (array == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
