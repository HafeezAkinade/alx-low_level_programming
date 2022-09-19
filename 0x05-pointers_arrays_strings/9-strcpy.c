#include "main.h"

/**
 * _strcpy - copy paste string
 * @dest: destination
 * @src: source
 *
 * Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int haf = 0;

	while (*(src + haf) != '\0')
	{
		*(dest + haf) = *(src + haf);
		haf++;
	}
	*(dest + haf) = '\0';

	return(dest);
}

