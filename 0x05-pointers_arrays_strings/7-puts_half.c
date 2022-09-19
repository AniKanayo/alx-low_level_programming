#include "main.h"
#include <string.h>

/**
 * puts_half -> a function that prints second half of a string
 * @str: parameter in _puts function
 */
void puts_half(char *str)
{
	int x, y, z;

	x = strlen(str);
	if (x % 2 == 1)
	{
		y = x / 2 + 1;
	}
	else
	{
		y = x / 2;
	}
	for  (i = y; i < x; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
