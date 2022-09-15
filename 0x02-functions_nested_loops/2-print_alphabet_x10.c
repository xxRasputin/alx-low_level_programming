#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets
 *
 * Description: print_alphabet_x10 function prints the alphabet 10 times.
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
