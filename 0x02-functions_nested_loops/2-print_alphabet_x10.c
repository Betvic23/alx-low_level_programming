#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lower x10
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
		i++;
	}
}
