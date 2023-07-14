#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - cats 2 strings
 * @s1: first string
 * @s2: second string
 * @n: num of bytes from s2
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t i = 0, j = 0;
	size_t a = 0, b = 0;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;

	if (n >= b)
		ptr = malloc(sizeof(char) * (a + b + 1));
	else
		ptr = malloc(sizeof(char) * (a + n + 1));

	if (ptr == NULL)
		return (NULL);

	while (i < a)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (n < b && i < (a + n))
		ptr[i++] = s2[j++];
	while (n >= b && i < (a + b))
		ptr[i++] = s2[j++];

	ptr[i] = '\0';

	return (ptr);
}
