#include "main.h"
/**
 * _isupper - checks if character is uppercase
 *
 * @c: character to check if it is uppercase
 *
 * Return: 0 if uppercase, 1 if not
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
