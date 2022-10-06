#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of a string
 * @s: the string
 *
 * Return: length of a string
 */
unsigned int _strlen(char *s)
{
	unsigned int m;

	for (m = 0 ; s[m] != '\0' ; m++)
		;
	return (m);
}

/**
 * string_nconcat - a function to concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 *
 * Return: a pointer with the contents of s1 then n byte of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int leng1, leng2, x, y;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	leng1 = _strlen(s1);
	leng2 = _strlen(s2);

	if (n >= leng2)
	{
		n = leng2;
	}

	ptr = malloc(sizeof(char) * (n + leng1 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0 ; x < leng1 ; x++)
		ptr[x] = s1[x];
	for (y = 0 ; s2[y] != '\0' && y != n ; y++, x++)
		ptr[x] = s2[y];

	ptr[x] = '\0';
	return (ptr);
}
