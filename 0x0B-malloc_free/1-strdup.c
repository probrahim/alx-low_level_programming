#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	int	i;
	int	length;
	char	*strcpy;

	length = 0;
	while (str[length])
	{
		length++;
	}
	strcpy = malloc(length + 1);
	if (strcpy !=NULL)
	{
		i = 0;
		while(str[i])
		{
			strcpy[i] = str[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
