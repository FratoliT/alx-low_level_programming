#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *
 *
 *
 */
int main(int __attribute_((__unused__)) aqrgc, char *argv[])
{
	int num1, num2;
	char *op;

	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[])
