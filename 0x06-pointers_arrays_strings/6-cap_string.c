#include "main.h"
/**
 * cap_string - capitalises the first alphabet
 * Return: str
 * @str: char value
 */
char *cap_string(char *str)
{
	int i;
	int next_one = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (next_one && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		next_one = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}');
	}
	return (str);
}
