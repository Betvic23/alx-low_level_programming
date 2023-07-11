#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char pointer
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *p;
	size_t len = strlen(str);
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
