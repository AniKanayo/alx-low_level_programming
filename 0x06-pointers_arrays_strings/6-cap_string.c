#include "main.h"
/**
 * cap_string - capitalizes every first letter of a word in a string.
 * separators of words are:  space,
 * tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @m: pointer to string.
 *
 *Return: pointer to m.
 */
char *cap_string(char *m)
{
	int count;

/*  scan through string */
	count = 0;
	while (m[count] != '\0')
	{/* if next character after count is a char , capitalise it */
		if (m[0] >= 97 && m[0] <= 122)
		{
			m[0] = m[0] - 32;
		}
		if (m[count] == ' ' || m[count] == '\t' || m[count] == '\n'
			|| m[count] == ',' || m[count] == ';' || m[count] == '.'
			|| m[count] == '.' || m[count] == '!' || m[count] == '?'
			|| m[count] == '"' || m[count] == '(' || m[count] == ')'
			|| m[count] == '{' || m[count] == '}')
		{
			if (m[count + 1] >= 97 && m[count + 1] <= 122)
			{
				m[count + 1] = m[count + 1] - 32;
			}
		}
		count++;
	}
	return (m);
}
