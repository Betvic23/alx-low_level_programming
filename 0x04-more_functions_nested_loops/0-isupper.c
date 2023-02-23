#include "main.h"
/**
 * _isupper - checkes if character is uppercase
 *
 * @c: character to check if is uppercase
 *
 * Return: 1 if uppercase, and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
