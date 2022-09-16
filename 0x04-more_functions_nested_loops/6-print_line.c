#include "main.h"

/**
 * print_line - To print lines
 * @n: para
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
