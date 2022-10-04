#include "main.h"
/**
 *_strlen - count array
 *@s: array of elements
 *Return: 1
 */

char *_strdup(char *str)
{
	char *ptstr;

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

	int count;
	for (count = 0; str[count] != '\0'; count++)
	{
		ptstr[count] = str[count];
	}
	ptstr[count] = '\0'
	return (ptstr);
}
