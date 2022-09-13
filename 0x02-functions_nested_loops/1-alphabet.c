#include "main.h"
/**
 * _putchar - prints a to z
 *
 * Return: always 0
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
