#include "main.h"
#include <string.h>
int is_pal_helper(char *s, int a, int b);
/**
 * is_palindrome - checks for a palindrome
 * @s: char pointer
 * Return: is_pal_helper
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_pal_helper(s, 0, len - 1));
}

/**
 * is_pal_helper - helps checks for the palindrome
 * @a: int value
 * @b: int value
 * @s: char pointer
 * Return: 0
 */
int is_pal_helper(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}

	if (s[a] == s[b])
	{
		return (is_pal_helper(s, a + 1, b - 1));
	}
	return (0);
}
