#include "main.h"
/**
 * print_last_digit - this will print the last digit of given set of numbers
 * @n: The int that use for the number in question
 * Return: value of the last digit
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

		if (last_digit < 0)
			last_digit *= -1;

	_putchar(last_digit + '0');

		return (last_digit);
}
