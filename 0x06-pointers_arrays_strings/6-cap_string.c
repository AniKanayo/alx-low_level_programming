#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @m: pointer to array.
 * Separators of words: space,
 * tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * Return: capitalized words
 */
char *cap_string(char *)
{
	int i; /* i represents the string length */

	i = 0;
	while (m[i] != '\0')
	for (i = 0; m[i]; i++)
	{
		if (i == 0)
		{
			if (m[i] >= 97 && m[i] <= 122)
			{
				m[[i] = m[i] - 32;
			}
		}
		else if (m[i - 1] == ' ' || m[i - 1] == '\t' || m[i - 1] == '\n'
			|| m[i - 1] == ',' || m[i - 1] == ';' || m[i - 1] == '.'
			|| m[i - 1] == '!' || m[i - 1] == '?' || m[i - 1] == '"'
			|| m[i - 1] == '(' || m[i - 1] == ')' || m[i - 1] == '{'
			|| m[i - 1] == '}')
		{
			if (m[i] >= 97 && m[i] <= 122)
			{
				m[[i] = m[i] - 32;
			}
		}
		else
		{
			m[i];
		}
		i++;
	}
	return (m);
}
