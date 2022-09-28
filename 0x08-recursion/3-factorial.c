#include "main.h"

/**
 * factorial - func th returns the factorial of a given number
 *
 *@n: param to be checked
 *
 *Return: factorial of a given no
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
