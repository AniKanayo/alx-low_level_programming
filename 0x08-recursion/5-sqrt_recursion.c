#include "main.h"
/**
 * micky - evaluates the square root of two numbers
 * @x: The number
 * @y: The number to test for the square root of @x
 * Return: square root
 */
int micky(int x, int y)
{
	if (y * y > x)
		return (-1);

	else if (y * y == x)
		return (y);

	else
		return (micky(x, y + 1));

	return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be returned
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (micky(n, 1));
}
