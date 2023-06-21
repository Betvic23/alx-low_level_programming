#include <stdio.h>
#include "main.h"
/**
 * _islower - checks if an alphabet is a lower case
 * @c: int value
 * Return: 1 on success, else 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
