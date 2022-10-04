#include "main.h"
/**
 * _strdup - function that returns a duplicates pointer
 * @str: string pointer
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *ptstr;
	int count;

	int str_len = 0; /* string length */

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	ptstr = malloc((str_len * sizeof(char)) + 1);
	if (ptstr == NULL) /* check if malloc returns null */
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		ptstr[count] = str[count];
	}
	ptstr[count] = '\0';

	return (ptstr);
}
