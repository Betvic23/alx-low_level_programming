#include "main.h"

int _sqrt_recursion_helper(int n, int start, int end);
/**
 * _sqrt_recursion_helper - extentend func for square root
 * @n: int
 * @start: int, first
 * @end: int, second
 * Return: -1
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid, square;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (_sqrt_recursion_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
}

/**
 * _sqrt_recursion - checks the sqaure root of a number
 * @n: int value
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 0, n));
}
