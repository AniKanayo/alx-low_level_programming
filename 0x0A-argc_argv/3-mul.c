#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - to prints the product of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 if ERROR occurs
 */
int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;

	printf("%i\n", product);

	return (0);
}
