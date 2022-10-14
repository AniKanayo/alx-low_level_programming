#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	int count, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (count = 0; count < bytes; count++)
	{
		printf("%02hhx", *((char *)main + count));
		if (count < bytes - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
