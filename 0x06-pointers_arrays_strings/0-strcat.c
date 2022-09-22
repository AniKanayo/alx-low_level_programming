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
	int i, j; /* i holds dest length and j holds the length of the src */

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((dest[i] = src[j++) != '\0')
	{
		j++;
		i++;
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
