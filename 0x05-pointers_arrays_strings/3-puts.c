#include "main.h"

/**
 * _puts -> a function that prints a string
 * @str: parameter in _puts function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
