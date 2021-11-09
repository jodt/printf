#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;

	_printf("%!\n");
	_printf("%K\n");

	len1 = _printf("%!\n");
	len2 = _printf("%K\n");

	_printf("%d\t%d\n", len1, len2);
	printf("%d\t%d\n", len1, len2);
	return (0);
}
