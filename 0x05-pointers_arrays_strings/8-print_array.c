#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elemets of an array of intigers
 * @a: array
 * @n: number of values to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
int t;
for (t = 0; t < n; t++)
{
printf("%d", a[t]);
{
if (t != (n - 1))
printf(", ");
}
}
printf("\n");
}
