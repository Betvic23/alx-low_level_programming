#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints everything
 * @format: list of types of args
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *ptr, *sepe = "";

	va_list any;

	va_start(any, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
				printf("%s%c", sepe, va_arg(any, int));
				break;
				case 'i':
				printf("%s%d", sepe, va_arg(any, int));
				break;
				case 'f':
				printf("%s%f", sepe, va_arg(any, double));
				break;
				case 's':
				ptr = va_arg(any, char *);
				if (!ptr)
					ptr = "(nil)";
				printf("%s%s", sepe, ptr);
				break;
				default:
				i++;
				continue;
			}
			sepe = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(any);
}
