#include "search_algos.h"


/**
  * binary_search - Searches for a value .
  * @array: A pointer.
  * @size: elements in the array.
  * @value: The value
  * Return: If the value is not present or the array is NUL.
  */

int binary_search(int *array, size_t size, int value)
{
	size_t p, gauche, droite;

	if (array == NULL)
	{
		return (-1);
	}
	gauche = 0;
	droite = size - 1;

	while (gauche <= droite)
	{
		printf("Searching in array: ");
		p = gauche;

		while (p < droite)
		{
			printf("%d, ", array[p]);
			p++;
		}
		printf("%d\n", array[p]);
		p = gauche + (droite - gauche) / 2;
		if (array[p] == value)
		{
			return (p);
		}
		if (array[p] > value)
			droite = p - 1;
		else
			gauche = p + 1;
	}
	return (-1);
}
