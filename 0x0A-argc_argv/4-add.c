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
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
