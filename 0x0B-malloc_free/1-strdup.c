#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
	{
	char *psd;
	int	i;
	int	p;

	p = 0;
	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	psd = malloc(sizeof(char) * (i + 1));
	if (psd == NULL)
		return (NULL);
	
	while (str[p])
	{
		psd[p] = str[p];
		p++;
	}
		return (psd);
}