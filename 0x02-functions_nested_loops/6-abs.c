#include <stdio.h>
#include "main.h"
/**
 * _abs - prints the absolute value of a number
 * @n: integer
 * Return: -n or n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
