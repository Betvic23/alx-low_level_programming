#include "main.h"
/**
 * _strncat - cats 2 strings with bytes
 * @dest: char 1
 * @src: char 2
 * @n: int value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int a;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
