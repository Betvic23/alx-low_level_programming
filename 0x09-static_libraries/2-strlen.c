#include "main.h"
/**
 * _strlen - determines the length of a string
 * @s: pointer to char
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}
	return (len);
}
