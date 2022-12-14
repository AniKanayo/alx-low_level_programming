#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: integer variable dat holds the memory size
 * Author: Sammykingx
 * Return: 0 means program was successful
 */
void *malloc_checked(unsigned int b)
{
	void *ptrv;

	ptrv = malloc(b);
	if (ptrv == NULL)
	{
		exit(98);
	}
	return (ptrv);
}
