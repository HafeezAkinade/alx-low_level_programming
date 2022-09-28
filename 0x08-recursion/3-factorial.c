#include "main.h"

/**
 * factorial - prints the factorial of  a given integer
 * @n: number to be used
 *
*/
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
