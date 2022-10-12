#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function to print a name passed to it
 * @name: char to be displayed to the stdout
 * @f: a function pointer
 * author: micky
 * Return: Noting to return because of the use of void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
