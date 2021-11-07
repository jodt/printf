#include"main.h"
#include<stdio.h>
/**
 * _printf - printf function
 * @format: string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arglist;
	int count = 0, i = 0, j;
	type type[] = {
		{"c", _printc},
		{"s", _prints},
		{"d", _printd},
		{NULL, NULL}
		 };

	va_start(arglist, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (type[j].c)
			{
				if (format[i + 1] == (type[j].c[0]))
				{
					count += type[j].ptr_f(arglist);
					i++;
					break;
				}
				j++;
			}
			i++;
		}
		write(1, &format[i], 1);
		count++;
		i++;
	}
	va_end(arglist);
	return (count);
}
