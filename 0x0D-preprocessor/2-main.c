#include <stdio.h>
/**
 * main - Program compilation starts from the main
 * Description: a program to print name of the file it was comipiled from
 * author: mickyx
 * Return: 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
