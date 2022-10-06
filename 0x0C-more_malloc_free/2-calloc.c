#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - to allocate memory space to an array using malloc
 * @nmemb: array elements
 * @size: bytes of the array
 *
 * Return: a pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *ptr;

	b = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(b);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < b ; a++)
	{
		ptr[a] = 0;
	}
	return (ptr);
}
