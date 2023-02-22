#include <stdio.h>
#include "main.h"
/**
 * main - Entry
 * Function -  print_alphabet prints alphabets in lower case 'a' to 'z'
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}
