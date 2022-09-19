#include <stdio.h>
#include "main.h"

/**
 * _strcpy - A function to copy a string pointed to by src and sends to dest
 * @dest: poiter parameter
 * @src: poiter parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}

