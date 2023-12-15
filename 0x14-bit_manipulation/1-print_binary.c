#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int pilote;
	int taille;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (pilote = n, taille = 0; (pilote >>= 1) > 0; taille++)
		;

	for (; taille >= 0; taille--)
	{
		if ((n >> taille) & 1)
			printf("1");
		else
			printf("0");
	}
}
