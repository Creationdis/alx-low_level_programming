#include "main.h"

/**
 * is_palindrome_helper - helper function for finding a palindrome
 * @s: int
 * @i: int
 * @c: char
 * Return: int
 *
 */
int is_palindrome_helper(char *c, int s, int i)
{
	if (s == i)
		return (1);
	if (c[s] != c[i])
		return (0);
	if (s < i + 1)
		return (is_palindrome_helper(c, s + 1, i - 1));
	return (1);
}

/**
 * getLen - gets the length of a string
 * @s: char string
 *
 * Return: int 
 */
int getLen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + getLen(s + 1));
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to char
 *
 * Return: returns in 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int val = getLen(s);

	if (val == 0)
		return (1);
	return (is_palindrome_helper(s, 0, val - 1));
}
