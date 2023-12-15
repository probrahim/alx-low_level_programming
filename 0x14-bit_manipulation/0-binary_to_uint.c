#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, porte;
	int taille;

	if (b == NULL)
		return (0);

	for (taille = 0; b[taille]; taille++)
	{
		if (b[taille] != '0' && b[taille] != '1')
			return (0);
	}

	for (porte = 1, sum = 0, taille--; taille >= 0; taille--, porte *= 2)
	{
		if (b[taille] == '1')
			sum += porte;
	}

	return (sum);
}
