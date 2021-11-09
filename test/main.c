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
	int len1;

	len1 = _printf("%");
	_printf("%d\n", len1);
	printf("%d\n", len1);

	len1 = _printf("%K\n");
	_printf("%d\n", len1);
	printf("%d\n", len1);

	len1 = _printf("%!\n");
	_printf("%d\n", len1);
	printf("%d\n", len1);

	return (0);
}
