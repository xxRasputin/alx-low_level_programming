#include "main.h"

/**
 * is_palindrome - checks for palindrome
 *
 *@s: string
 *
 * Return: 1 correct, 0 otherwise
 */
int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks if string is a pallindrome
 *
 * @s: string checked
 *
 * @start: start index
 *
 * @end: end index
 *
 * @flag: flag to indicate if a string is a pallindrome
 *
 * Return: void
 */
void check(char *s, int start, int end, int *n)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*n *= 0;
		check(s, start + 1, end - 1, n);
	}
}

/**
 * _strlen_recursion - calculate length of the string
 *
 * @s: string to be used
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
