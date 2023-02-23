#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 1 if letter is lowercase, else return 0
 * 'C' - character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
