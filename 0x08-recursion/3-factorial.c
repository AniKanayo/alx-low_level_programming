#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number whose factorial is to be returned
 * Return: an integer value of the factorial
 */
int factorial(int n)
{
	if ( n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * (factorial (n-1)));
	}
}
