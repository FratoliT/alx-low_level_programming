#include "main.h"
#include <stdio.h>

/**
 * print _array - prints elemets of an array
 * @a: array
 * @n: number of values to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
int t;
for (t = 0; t < (n - 1); t++)
{
printf("%d", a[t]);
if (t == (n - 1))
printf("%d", a[n - 1]);
}
printf("\n");
}
