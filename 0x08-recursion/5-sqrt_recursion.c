#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - square root using recursion
 *
 *@n: parameter to be dealt with
 *
 * Return: square root of aa number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square root using recursion
 *
 * @n: number
 *
 * @j: iterator
 *
 * Return: num
 */
int _sqrt(int n, int j)
{
	int square = j * j;

	if (square > n)
		return (-1);
	if (square == n)
		return (j);
	return (_sqrt(n, j + 1));
}
