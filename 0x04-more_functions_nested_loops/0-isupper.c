#include "main.h"

/*
 * _isupper - checks if a character is uppercase or not
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
