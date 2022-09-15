#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @n: number being tested
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	return (-n);
}
