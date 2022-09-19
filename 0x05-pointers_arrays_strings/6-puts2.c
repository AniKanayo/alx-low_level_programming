#include "main.h"
#include <string.h>

/**
 * puts2 -> a function that prints every other character of a stringr
 * @str: parameter in _puts2 function
 */
void puts2(char *str)
{
	int i, j;

	i = strlen(str);
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
