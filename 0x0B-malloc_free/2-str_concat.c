#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
** str_concat - concatenates two strings of any size
* @s1: The first string to concatenate
* @s2: The second string to concatenate
* Return: The two strings concatenated
*/
char *str_concat(char *s1, char *s2)
{
int i, j;
char *con;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

i = j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
con = malloc(sizeof(char) * (i + j + 1));

if (con == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
con[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
con[i] = s2[j];
i++, j++;
}
con[i] = '\0';
return (con);
}
