#include "main.h"
/**
 * _strncpy - function that copies a string, including terminating
 * null byte, using at most an inputted number of bytes.
 * if the length of the src str is < the max byte number, the
 * remainder of the destination string is filled with null bytes.
 * works the same way as the standard library function strncpy.
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max num of byte copied
 * Return: returns dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
