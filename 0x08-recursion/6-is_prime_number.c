#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - prime no identifier
 *
 * @n: number
 *
 * Return: prime no
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks for prime numbers
 *
 * @n: number
 *
 * @j: iterator
 *
 * Return: 1 when correct 0 otherwise
 */
int check_prime(int n, int j)
{
	if (n <= 1)
		return (0);
	if (n % j == 0 && j > 1)
		return (0);
	if ((n / j) < j)
		return (1);
	return (check_prime(n, j + 1));
}
