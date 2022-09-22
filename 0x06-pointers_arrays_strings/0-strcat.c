#include "main.h"

/**
 * _strcat - a function that concanates two strings
 * @dest: a pointer to destination string
 * @src: a pointer to source string
 *
 * Return: return pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int length, j; /* j holds the length of the src */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
