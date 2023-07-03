#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: chr pointer
 * @accept: char pointer
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int num = 0;
	char *acc;

	while (*s != '\0')
	{
		acc = accept;
		while (*acc != '\0')
		{
			if (*s == *acc)
			{
				num++;
				break;
			}
			acc++;
		}
		if (*acc == '\0')
		{
			break;
		}
		s++;
	}
	return (num);
}
