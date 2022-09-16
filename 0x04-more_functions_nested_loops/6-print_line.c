#include "main.h"

/**
 * print_lines - prints line
 * @n: parameter
 */

void print_line(int n)
{
	int j = 1;

	while (j <= n)
	{
		_putchar(95);
		j++;
	}
	_putchar('\n');
}
