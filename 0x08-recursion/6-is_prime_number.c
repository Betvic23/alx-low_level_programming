#include "main.h"
/**
 * is_prime_number - checks for a prime number
 * @n: integer value
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (n);
}
