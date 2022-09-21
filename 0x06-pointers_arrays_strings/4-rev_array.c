#include "main.h"
#include <stdio.h>
/**
 * reverse_array - this function reverses the content of an array
 * @a: array
 * @n: number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

