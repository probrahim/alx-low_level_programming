#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int pilote;

	if (index > 64)
		return (-1);
	pilote = index;
	for (i = 1; pilote > 0; i *= 2, pilote--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
