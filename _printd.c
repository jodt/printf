#include"main.h"
/**
 * _printd - print an integer
 * @arglist : list of arguments
 * Return: number of characters printed
 */
int _printd(va_list arglist)
{
	int c = va_arg(arglist, int), count = 0;

	if (c < 0)
	{
		write(1, "-", 1);
		c = -c;
	}

	count = write_integer(c, 1);
	return (count);
}
/**
 * write_integer - print an integer with write's function
 * @a: integer;
 * @count: count
 * Return: number of characters printed
 */

int  write_integer(int a, int count)
{
	int c = a;
	int temp;

	if (c / 10)
	{
		write_integer(c / 10, count++);
	}
	temp = (c % 10) + '0';
	write(1, &temp, sizeof(temp));
	return (count);
}
