#include "main.h"

/**
 * more_numbers - prints number
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
	_putchar(i);
	}
	_putchar('\n');
}
