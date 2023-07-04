#include "main.h"
/**
 * _strpbrk - searches a string for any sets of bytes
 * @s: string to search
 * @accept: bytes to search for
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*p == *s)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return ('\0');
}
