#include "main.h"

/**
 * _islower - checks for lower case character
 *
 * @c: parameter to be checked
 *
 * Return: 1 if @c is lowercase 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
