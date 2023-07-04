#include "main.h"
/**
 * _strstr - checks for first appearance of a substring
 * @haystack: string to check
 * @needle: substring
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;

	while (*p != '\0')
	{
		char *start = p;
		char *sub = needle;

		while (*sub != '\0' && *p == *sub)
		{
			p++;
			sub++;
		}
		if (*sub == '\0')
		{
			return (start);
		}
		p = start + 1;
	}
	return ('\0');
}
