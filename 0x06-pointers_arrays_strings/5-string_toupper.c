#include "main.h"
/**
 * string_toupper - a function that changes lowercase to uppercase
 * @x: pointer to array.
 *
 * Return: 0 if successful
 */
char *string_toupper(char *x)
{
	char x;
	int i, dif = 'a' - 'A';

	i = 0;
	while (x[i])
	{
		if ((x[i] >= 'a') && (x[i] <= 'z'))
			x[i] -= dif; /*convert to uppercase letters */
		++i;
	}
	return (0);
}
