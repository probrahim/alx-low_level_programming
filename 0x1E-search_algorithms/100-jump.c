#include "search_algos.h"

/**
 * jump_search - searches for a value in an array
 *
 *
 * @array : to input array
 * @size : len
 * @value : value to found
 * Return: index of the number
*/

int jump_search(int *array, size_t size, int value)
{
	int i, a, b, ins;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);

	a = (int)sqrt((double)size);
	b = 0;
	ins = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		b++;
		ins = i;
		i = b * a;
	} while (i < (int)size && array[i] < value);
	printf("Value found between indexes [%d] and [%d]\n", ins, i);

	for (; ins <= i && ins < (int)size; ins++)
	{
		printf("Value checked array[%d] = [%d]\n", ins, array[ins]);
		if (array[ins] == value)
			return (ins);
	}
	return (-1);
}
