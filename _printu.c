#include"main.h"
/**
 * _printu - print an unsigned integer
 * @arglist : list of arguments
 * Return: number of characters printed
 */
int _printu(va_list arglist)
{
	unsigned int c, count = 0;

	c = va_arg(arglist, unsigned int);
	count = write_uninteger(c);
	return (count);
}
/**
 * write_uninteger - print an integer with write's function
 * @number: integer;
 * Return: number of characters printed
 */

int  write_uninteger(unsigned int number)
{
	unsigned int temp;
	static int characters_printed;

	characters_printed = 0;
	if (number / 10)
	{
		write_uninteger(number / 10);
	}
	temp = (number % 10) + '0';
	characters_printed++;
	write(1, &temp, sizeof(temp));
	return (characters_printed);
}
