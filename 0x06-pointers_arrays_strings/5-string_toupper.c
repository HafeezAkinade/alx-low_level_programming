#include "main.h"

/**
 * string_toupper - this function changes all lowercase letters to uppercases
 * @str: string to be changed
 *
 * Return: the strings
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
