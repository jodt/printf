#include"main.h"
/**
 * _printd - print an integer
 * @arglist : list of arguments
 * Return: number of characters printed
 */
int _printd(va_list arglist)
{
	int c = va_arg(arglist, int), count;

	if (c < 0)
	{
		write(1, "-", 1);
		c = -c;
	}

	count = write_integer(c);
	return (count);
}
/**
 * write_integer - print an integer with write's function
 * @number: integer
 * Return: number of characters printed
 */

int  write_integer(int number)
{
	int temp, characters_printed;

	characters_printed = 0;
	if (number / 10)
	{
		characters_printed = write_integer(number / 10);
	}
	temp = (number % 10) + '0';
	return (characters_printed += write(1, &temp, 1));
}
