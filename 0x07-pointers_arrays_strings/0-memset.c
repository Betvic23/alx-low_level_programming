#include "main.h"
/**
 * _memset - set all elements of a memory withconst byte
 * @s: char value pointer
 * @b: char value
 * @n: unsigned int
 * Return: memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *jr = s;

	while (n-- > 0)
	{
		*jr++ = b;
	}
	return (s);
}
