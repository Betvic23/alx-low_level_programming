#include "main.h"
/**
 * reverse_array - prints a string in reversed
 * @n: int value
 * @a: int value
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
