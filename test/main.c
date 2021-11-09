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

	len1 = _printf("%b\n", '0');

	_printf("%d\n", len1);
	printf("%d\n", len1);

	return (0);
}
