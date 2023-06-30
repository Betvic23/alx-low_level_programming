#include "main.h"
/**
 * string_toupper - converts strings to upper case
 * @str: char value
 * Return: str
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - ('a' - 'A');
		}
		p++;
	}
	return (str);
}
