#include "main.h"

/**
 * _isdigit - checks for digit from 0-9
 * @c: parameter
 * Return: 0 if sucessful
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
