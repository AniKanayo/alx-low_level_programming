#include <stdio.h>
#include "main.h"
/**
 * main - to Print the nuamber of arguments passed to it
 * @argc: argument counter
 * @argv: counted rguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Disregard argv */
	printf("%d\n", argc - 1);

	return (0);
}
