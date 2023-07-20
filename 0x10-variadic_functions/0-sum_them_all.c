#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * sum_them_all - sums the a list of values
 * @n: last arg of va_start
 * Return: total
 */
int sum_them_all(const unsigned int n, ...)
{
	size_t i, p;
	int total = 0;

	va_list sum;

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
	p = va_arg(sum, size_t);
	total = total + p;
	}

	va_end(sum);

	return (total);
}
