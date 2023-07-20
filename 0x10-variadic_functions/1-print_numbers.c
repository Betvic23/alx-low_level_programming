#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints a list of numbers
 * @separator: seperates the numbers to be printed
 * @n: number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i, p;

	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		p = va_arg(num, int);
		printf("%ld", p);
	}
	printf("\n");

	va_end(num);
}
