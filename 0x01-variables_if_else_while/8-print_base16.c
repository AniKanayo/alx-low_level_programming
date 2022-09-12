#include <stdio.h>

/**
 * main - To prints hexadecimal
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = '0';
	int k = 'a';

	while (m <= '9')
	{
		putchar(m);
		m++;
	}
	while (k <= 'f')
	{
		putchar(k);
		k++;
	}
	putchar('\n');

	return (0);
}
