#include <stdio.h>
#include "main.h"
/**
 * main - to Print all arguments it receives.
 * @argc: argument counter
 * @argv: counted rguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int m = argc;

	for (i = 1 ; i <= m ; i++)
	{
		printf("%s\n", argv[i - 1]);
	}
	return (0);
}
