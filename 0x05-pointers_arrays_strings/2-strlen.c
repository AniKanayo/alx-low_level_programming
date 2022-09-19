#include "main.h"
#include <stdio.h>

/**
 * _strlen -> a function to get the length of a string
 * @s: string pointer to be passed
 * Return: To return the length of the string
 */

int _strlen(char *s)
{

	char n[] = "my name is michael";
	int s = 0;
	int i = 0;

	while (n[i] != '\0')
	{
		s++;
		i++;
	}
	printf("%d", s);
}
