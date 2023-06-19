#include <stdio.h>
/**
 * main - Entry
 * prints numbers of base 16 in lowercase
 * Return: o
 */
int main(void)
{
	int a, c;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
