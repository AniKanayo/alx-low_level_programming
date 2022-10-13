#include "variadic_functions.h"

/**
 * sum_them_all - adds num
 * @n: param
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va-list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(va-list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(va-list, int);

	va_end(va-list);

	return (sum);
}
