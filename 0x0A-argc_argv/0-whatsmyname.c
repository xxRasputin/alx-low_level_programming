#include <stdio.h>

/**
 * main - function that prints its name
 *
 * @argc: argc parameter
 *
 * @argv: array of listed commands
 *
 * Return: 0 for success 1 otherwise
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
