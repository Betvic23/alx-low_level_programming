#include "main.h"
/**
 * _strchr - loctaes a chracter in a string
 * @s: char pointer
 * @c: char
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
