#include "main.h"
/**
 * _puts - prints a string and a new line
 * @str: string
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
