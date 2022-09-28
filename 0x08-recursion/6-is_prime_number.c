#include "main.h"

/**
 * is_prime_number - returns 1 if n == prime
 * @n: number to be checked
 *
 * Return: 1 if n is prime, else, 0
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start))
}

/**
 * is_prime - this prints 1 if n is prime
 * @n: the number to be checked
 * @start: the number to start with
 *
 * Return: 1 if n is prime, else,  returns 0.
*/
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
