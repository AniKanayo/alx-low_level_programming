#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: elements of array
 * @size: bytes of the array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(nmemb));
	for (i = 0; i < (size * sizeof(nmemb)); i++)
	{
		ptr[(size * sizeof(nmemb))] = 0;
	}
	return (NULL);
}
