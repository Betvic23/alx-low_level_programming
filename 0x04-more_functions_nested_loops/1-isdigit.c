#include "main.h"
/**
 * _isdigit - writes a function that checks for a digit 0 to 9
 *
 * @c: character to check for digit
 *
 * Return: 1 if a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
