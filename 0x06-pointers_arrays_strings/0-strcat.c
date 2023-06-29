#include "main.h"
/**
 * _strcat - concatenate 2 strings
 * @dest: first char to cat
 * @src: second char to add
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';

	return (dest);
}
