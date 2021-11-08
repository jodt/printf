#include "main.h"

/**
  * _printb - Handling the %b format specifier of _printf
  * @arg: Current argument
  *
  * Return: Number of character of the argument
  */

int _printb(va_list arg)
{
	int c = va_arg(arg, int), n = 1, i = 0;

	if (c == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (c >= n)
	{
		n *= 2;
		i++;
	}
	n /= 2;

	while (n != 0)
	{
		if (c >= n)
		{
			write(1, "1", 1);
			c -= n;
		}
		else
			write(1, "0", 1);
		n /= 2;
	}

	return (i);
}
