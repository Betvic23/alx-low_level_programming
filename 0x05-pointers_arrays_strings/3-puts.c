#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string to stdout
 * @str: pointer to char
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
