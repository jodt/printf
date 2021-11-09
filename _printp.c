#include"main.h"
#include <inttypes.h>
#include <stdio.h>

void printString(char *);

/**
 * _printp - prints int to hexadecimal
 * @arglist: list of arguments
 *
 * Return: number of characters printed
 */
int _printp(va_list arglist)
{
	char *ptr = va_arg(arglist, void *);
	int i = 0;

	write_x((uintptr_t) ptr);

	return (i);
}
