#include "main.h"
#include <stdio.h>

/**
 * main - to print its own name and a newline character
 * @argc: argument counter
 * @argv: array pointing to arguements
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
