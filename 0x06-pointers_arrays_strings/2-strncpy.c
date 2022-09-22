#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination string pinter
 * @src: source string pointer.
 * @n: integer value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= dest[n]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (0);
}
