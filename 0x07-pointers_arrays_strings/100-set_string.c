#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to change
 * @to: string to change pointer to
 *
 * Return: 0
*/
void set_string(char **s, char *to);
{
	*s = to;
}