#include "main.h"
/**
 * factorial - checks factorial of a given number
 * @n: num to check factorial
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n = n * factorial(n - 1));
	}
	return (n);
}
