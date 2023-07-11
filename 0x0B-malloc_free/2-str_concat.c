#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first strint to cat
 * @s2: second string to cat
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j = 0;
	int a, b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (s1[a] != '\0')
	{
		ptr[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		ptr[a] = s2[b];
		b++, a++;
	}

	ptr[a] = '\0';

	return (ptr);
}
