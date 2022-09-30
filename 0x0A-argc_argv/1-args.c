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
int main(int argc, char *argv[]  __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
