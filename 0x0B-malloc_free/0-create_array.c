#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: size of the arrey
 * @c:insert
 * Return: 0 fail 1 pass
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

		if (size == 0)
			return (0);
	array = malloc(sizeof(char) * size);

	if (array == 0)
		return (0);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);

}
