#include "main.h"

/**
 * rev_string -> a function to reverse a string
 * @s: parameter in rev_string function
 */
void rev_string(char *s)
{
	char tempo;
	int i, l1, l2;

	l1 = 0;
	l2 = 0;

	while (s[l1] != '\0')
		l1++;
	l2 = l1 - 1;
	for (i = 0; i < l1 / 2; i++)
	{
		tempo = s[i];
		s[i] = s[l2];
		s[l2] = tempo;
		l2 -= 1;
	}
}

