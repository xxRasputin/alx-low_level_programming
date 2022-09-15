#include "main.h"

/**
 * print_last_digit - computes absolute values
 *
 * @n: parameter to be checked
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d = -n;

	_putchar(d + '0');
	return (d);
}
