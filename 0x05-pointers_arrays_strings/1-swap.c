#include "main.h"

/**
 * swap_int -> a function to swap the values of two integers
 * @a: parameter 1
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{

	int d;

	d = *a;
	*a = *b;
	*b = d;
}
