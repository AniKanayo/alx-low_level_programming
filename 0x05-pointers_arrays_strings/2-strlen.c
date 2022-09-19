#include "main.h"

/**
 * _strlen -> a function to get the length of a string
 * @s: string pointer to be passed
 * Return: To return the length of the string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
