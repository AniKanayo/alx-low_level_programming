#include <stdio.h>

/**
 * main - Entry point
 * author: micky
 * Return: Always 0 (Success)
 */
int main(void)
{
	char micky;

	for (micky = 'a'; micky <= 'z'; micky++)
	{
		if (micky != 'q' && micky != 'e')
			putchar(micky);
	}
	putchar('\n');
	return (0);
}