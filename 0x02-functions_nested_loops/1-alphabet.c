#include <stdio.h>
#include "main.h"
/**
 *main - Entry
 *print_alpabet - prints the alpha in lower case
 *Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
}
