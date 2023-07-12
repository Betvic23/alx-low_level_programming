#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - prints a single character
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
