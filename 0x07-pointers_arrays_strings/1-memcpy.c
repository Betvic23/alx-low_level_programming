#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: char pointer
 * @src: char pointer
 * @n: int value
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pr = dest;
	char *tr = src;

	while (n-- > 0)
	{
		*pr++ = *tr++;
	}
	return (dest);
}
