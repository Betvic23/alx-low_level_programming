#include <stdio.h>
/**
 * main - Entry
 * prints alphabets in reversed
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
