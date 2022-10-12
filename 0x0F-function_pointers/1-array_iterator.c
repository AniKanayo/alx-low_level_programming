#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - calls a function to act on array elements
 * @array: name of the array which the function is to act on.
 * @size: size of the array passed to the function
 * @action: the function that acts on the array elements
 * Return: no return because of the use of void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
