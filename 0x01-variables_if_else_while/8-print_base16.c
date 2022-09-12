#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Accept 0 (Success)
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (c = 97; c < 103; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
