#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat		
 * Return: concat of s1 and s2		
 */ 
char *str_concat(char *s1, char *s2)
{
	char *psd;
	int i;
	int t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = t = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[t] != '\0')
		t++;
	psd = malloc(sizeof(char) * (i + t + 1));

	if (psd == NULL)
		return (NULL);
	i = t = 0;
		while (s1[i] != '\0')
	{
		psd[i] = s1[i];
		i++;
	}
	while (s2[t] != '\0')
	{
		psd[i] = s2[t];
		i++, t++;
	}
	psd[i] = '\0';
	return (psd);
}
