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
	int a = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[a] != '\0')
	{
		a++;
	}	

	p = malloc(sizeof(char) * (a + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
