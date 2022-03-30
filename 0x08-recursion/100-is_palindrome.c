#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindromw(char *s);

/**
 * find_strlen - Return the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1 not palindrome - 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index)
}
