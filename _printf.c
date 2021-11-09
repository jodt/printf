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
	int count = 0, i = 0, j = 0, count1 = 0;
	char specifier[] = {'c', 's', 'b', 'd', 'i', 'u', 'o', 'x', 'X', 'S', 'p'};

	va_start(arglist, format);

	if (format == NULL)
		return (-1);
	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);

	while (specifier[j])
	{
		if (format[0] == '%' && format[1] == specifier[j])
			count1++;
		j++;
	}
	if (count1 == 0)
		return (-1);

	while (format && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i++], 1);
			count++;
			continue;
		}
		else if (format[i] == '%' && get_specifier_func(format[i + 1]) != NULL)
		{
			count += get_specifier_func(format[i + 1])(arglist);
			i++;
		}

		else if (format[i] == '%' && format[i + 1] == '%')
		{
			write(1, &format[i + 1], 1);
			count++;
			i++;
		}

		i++;
	}
	va_end(arglist);
	return (count);
}
