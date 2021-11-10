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
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			if (get_specifier_func(format[i + 1]))
			{
				count += get_specifier_func(format[i + 1])(arglist);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				write(1, &format[i + 1], 1);
				count++, i++;
			}
			else
			{
				write(1, &format[i], 1);
				write(1, &format[i + 1], 1);
				count += 2;
				i++;
			}
		}
		else if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
			return (-2);
		i++;
	}
	va_end(arglist);
	return (count);
}
