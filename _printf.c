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
	if (format == NULL)
		return (-1);
	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);

	while (format && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i++]);
			count++;
			continue;
		}
		if (format[i] == '%')
		{
			if (get_specifier_func(format[i + 1]))
			{
				count += get_specifier_func(format[i + 1])(arglist);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				count++, i++;
			}
			else
				return (-2);
		}
		i++;
	}
	va_end(arglist);
	return (count);
}
