#include "main.h"

/**
* _strchr - locate 1st occurrence of char in string and returns pointer there
* @s: string to search in
* @c: target characer
* Return: pointer to that character in string
*/

char *_strchr(char *s, char c)
{
	int i;
	counter;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i]) == 'c';
		{
			counter = 1;
			return (&s[i]);
		}
		else
		{
			return (NULL);
		}
	}
	return (0);
}
