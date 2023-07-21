#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, followed by a new line
 * @n: The number of strings passed to the function
 * @separator: The string to be printed between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ptr;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		ptr = va_arg(strings, char *);

		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
