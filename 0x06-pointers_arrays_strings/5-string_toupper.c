#include "main.h"
/**
 * string_toupper - a function that changes lowercase to uppercase
 * @y: pointer to array.
 *
 * Return: uppercase when successful
 */
char *string_toupper(char *y)
{
	int i; /* i represents the length */

	i = 0;
	while (y[i] != '\0')
	{
		if ((y[i] >= 97) && (y[i] <= 122))
			y[i] = y[i] - 32; /*convert to uppercase letters */
		i++;
	}
	return (y);
}
