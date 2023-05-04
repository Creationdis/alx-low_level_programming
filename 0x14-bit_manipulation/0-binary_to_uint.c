#include "main.h"

/**
 * binaire_to_uint - convertit un nombre binaire en unsigned int
 * @b: chaîne contenant le nombre binaire
 *
 * Retourne: le nombre converti
 */

unsigned int binaire_to_uint(const char *b)
{
	int i;
	unsigned int val_dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val_dec = 2 * val_dec + (b[i] - '0');
	}

	return (val_dec);
}

