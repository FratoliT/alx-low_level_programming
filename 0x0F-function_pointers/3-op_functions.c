#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns the addition of two numbers
 * @a: The first number
 * @b: The second number
 * Return: (success)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - returns the multiplication of two numbers
 * @a: The first number
 * @b: The second number
 * Return: (success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_sub - returns the substaction of two numbers
 * @a: The first number
 * @b: The second number
 * Return: (success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - returns the division of two numbers
 * @a: The first number
 * @b: The second number
 * Return: (success)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of two number
 * @a: the first number
 * @b: The second number
 * Return: (success)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
