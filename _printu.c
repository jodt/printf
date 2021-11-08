#include"main.h"
#include<stdio.h>
/**
 * _printu - print an unsigned integer
 * @arglist : list of arguments
 * Return: number of characters printed
 */
int _printu(va_list arglist)
{
	unsigned int c, count = 0;

	c = va_arg(arglist, unsigned int);
	count = write_uninteger(c, 1);
	return (count);
}
/**
 * write_uninteger - print an integer with write's function
 * @a: integer;
 * @count: count
 * Return: number of characters printed
 */

int  write_uninteger(unsigned int a, int count)
{
	unsigned int c = a;
	unsigned int temp;

	if (c / 10)
	{
		write_uninteger(c / 10, count++);
	}
	temp = (c % 10) + '0';
	write(1, &temp, sizeof(temp));
	return (count);
}
