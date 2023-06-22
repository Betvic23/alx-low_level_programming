#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - show ifa number is positive or not
 * Return: 0
 * @i: integer
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i < 0)
	{
		printf("%d is negetive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
}
