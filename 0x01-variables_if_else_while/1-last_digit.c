#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print random number to variable n
 *
 * Description: using the amin function
 * this program assign random numbers to the variable n.
 * Return: 0
*/
int main(void)
{
	int n;
	int 1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1 = n % 10;

	if (1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1);
	}
	else if (1 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, 1);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, 1);
	}
	return (0);
}
