#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabets in small letters
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
