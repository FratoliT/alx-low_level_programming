#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - check if number is prime or not
 * @n: number to be checked
 * Return: 1 if number is prime
 * 0 if number is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is primei recursively
 * @n: number being checked
 * @i: possible factor of the number
 * Returns: 0 if not prime, 1 if prime
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
