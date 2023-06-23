#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks if an alphabet is upper
 * @c: integer
 * Return: 1 on success, else 0
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
