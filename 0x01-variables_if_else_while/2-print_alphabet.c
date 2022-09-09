#include <stdio.h>

/**
 * main - print lowercase a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
	char micky;

	for (micky = 'a'; micky <= 'z'; micky++)
	{
		putchar(micky);
	}
	putchar('\n');

	return (0);
}