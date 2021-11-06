#include"main.h"
/**
 * _printf - printf function
 * @format: string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arglist;
	int count = 0, i = 0;

	va_start(arglist, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{	i++;
			_printc(arglist);
		}
		else
		{	
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(arglist);
	return (count);
}
