#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
