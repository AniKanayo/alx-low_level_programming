#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string for the comparison
 * @s2: second string for the comparison
 * Return: the difference between s1 and s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
