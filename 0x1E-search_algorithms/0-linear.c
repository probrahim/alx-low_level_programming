#include "search_algos.h"



/**
 * linear_search - searches for a value in an array
 * @array: ENT  array
 * @size: size ofarray
 * @value: search in
 * Return: EXIT_SUCCESS
 */



int linear_search(int *array, size_t size, int value)
{
	int p;

	p = 0;
	if (array == NULL)
	{
		return (-1);
	}

	while (p < (int)size)
	{
		printf("Value checked array[%u] = [%d]\n", p, array[p]);

		if (value == array[p])
		{
			return (p);
		}
		p++;
	}
	return (-1);
}
