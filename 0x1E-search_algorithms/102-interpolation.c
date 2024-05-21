#include "search_algos.h"



/**
 * interpolation_search - searches for a value in an array of
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */



int interpolation_search(int *array, size_t size, int value)
{
	size_t x, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		x = (size_t)(low + f);
		printf("Value checked array[%d]", (int)x);

		if (x >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[x]);
		}

		if (array[x] == value)
			return ((int)x);

		if (array[x] < value)
			low = x + 1;
		else
			high = x - 1;

		if (low == high)
			break;
	}

	return (-1);
}
