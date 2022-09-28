#include "main.h"

/**
 * _strlen_recursion - fuct that returns length of a string
 *
 *@s: param to be checked
 *
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
