#include <stdio.h>

/**
 * main - Entry point
 * author: micky
 * Return: Always 0 (Success)
 */
int main(void)
{
	char micky;

	for (micky = 'z'; micky >= 'a'; micky--)
		putchar(micky);
	putchar('\n');
	return (0);
}
