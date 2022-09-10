#include <stdio.h>
/**
 * main - program compilation begins from main
 * Description: To print all possible combinations of two different numbers
 * author: sammykingx
 * Return: 0 means success
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
        {
		for (b = 0; b <= 9; b++)
                {
			if ( a != b && b > a)
                        {
				putchar(a);
				putchar(b);
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}