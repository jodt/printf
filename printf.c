#include "main.h"

/**
  * _printf - Prints strings with formats if there are some
  * @format: String
  *
  * Return: Numbers of characters printed (excluding null byte)
  */

int _printf(const char *format, ...)
{
	va_list arglist;
	int i, sum = 0;

	va_start(arglist, format);

	i = 0;
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			sum++;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			_prints(arglist);
			sum += _prints(arglist);
		}
		i++;
	}
	return (sum);
}
