#include "main.h"
/**
 * _islower - the function that checks lowercase characters
 * @c: is the int the is use for the argument of the function
 * Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
