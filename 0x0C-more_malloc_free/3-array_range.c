#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - To make an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: a pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0 ; min <= max ; min++, a++)
	{
		ptr[a] = min;
	}
	return (ptr);
}
