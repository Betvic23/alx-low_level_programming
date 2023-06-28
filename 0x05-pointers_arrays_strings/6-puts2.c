#include "main.h"
/**
 * puts2 - prints half a number provided
 * @str: char pointer
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
			str++;
		}
	}
	_putchar('\n');
}
