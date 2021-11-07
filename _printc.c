#include"main.h"
/**
 * _printc - print a character
 * @arglist: list of arguments
 * Return: number of character printed
 */
int _printc(va_list arglist)
{
	int c = va_arg(arglist, int);

	write(1, &c, 1);
	return (1);
}
