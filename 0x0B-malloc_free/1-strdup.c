#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to string
 * Return: Returns NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *c;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	c = (char *)malloc((sizeof(char) * j) + 1);
	if (c == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		c[i] = str[i];
	c[j] = '\0';

	return (c);
}
