#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *_strdup - copies the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (sucess); Null (error)
 */
char *_strdup(char *str)
{
	char *k;
	int i, j;

	i = 0;
	j = 0;
	if (str == NULL)
	return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	k = malloc(sizeof(char) * (i + 1));
	if (k == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		k[j] = str[j];
	return (k);
}

