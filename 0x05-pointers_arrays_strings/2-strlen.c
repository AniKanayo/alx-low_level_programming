#include <stdio.h>
#include "main.h"

/**
 * _strlen -> a function to get the length of a string
 * @s: string pointer to be passed
 * Return: To return i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
