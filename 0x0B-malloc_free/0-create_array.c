#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an arrays of chars
 * @size: unsigned int
 * @c: char value
 * Return: a
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = (char*) malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	if (size == 0)
	{
		return (NULL);
	}

	if (a == NULL)
	{
		return (NULL);
	}

	return (a);
}
