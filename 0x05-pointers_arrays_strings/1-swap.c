#include <stdio.h>

/**
 *swap_int -  Write a function that swaps the values of two integers.
 *@a: first integer to be swapped
 *@b: second intiger to be swapped
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
