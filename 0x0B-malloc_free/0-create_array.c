#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size,char c)
{
	unsigned int	i;
	char *str;

	i = 0;
	str = malloc(sizeof(char) * size);
	if(size == 0 || str == NULL)
	return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
