#include <stdio.h>
#include "main.h"
/**
 * print_line - prints lines accordinging to numbers
 * Return: 0
 * @n: integer
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
