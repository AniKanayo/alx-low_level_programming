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
	int len = 0;
	int ind = 0;
	while (n[ind] != '\0')
	{
		len++;
		ind++;
	}
	printf ("%d", len);
}
