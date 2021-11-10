#include"main.h"
int checkSpecifier(const char *format, va_list);
/**
 * _printf - printf function
 * @format: string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arglist, copy;
	int count = 0, i = 0;

	va_start(arglist, format);
	va_copy(copy, arglist);
	if (format == NULL)
		return (-1);
	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);
	if (checkSpecifier(format, copy) == -1)
		return (-5);

	while (format && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i++], 1);
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
				write(1, &format[i + 1], 1);
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

/**
  * checkSpecifier - Check for NULL specifier
  * @format: string to check
  * @arg: current arg
  *
  * Return: 0 if no NULL specifier otherwise -1)
  */

int checkSpecifier(const char *format, va_list arg)
{
	int i = 0, count = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (get_specifier_func(format[i + 1]) && !va_arg(arg, char*))
				count++;
		}
		i++;
	}
	if (count == 0)
		return (0);
	else
		return (-1);
}
