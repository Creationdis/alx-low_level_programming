#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: allocated memory
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
		exit(98);
	return (pntr);
}
