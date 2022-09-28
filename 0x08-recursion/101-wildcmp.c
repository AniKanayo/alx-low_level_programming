# include "main.h"

/**
 * wildcmp - a function to compare two strings permitting wildcard char
 * @s1: String to be compared
 * @s2: base String being compared with s1
 *
 * Return: 1 if identical and 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
