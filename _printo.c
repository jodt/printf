#include"main.h"
/**
 * _printo - prints integer to octal
 * @arglist: list of arguments
 *
 * Return: number of characters printed
 */
int _printo(va_list arglist)
{
	unsigned int n = va_arg(arglist, unsigned int), count;

	count = write_octal(n);
	return (count);
}

/**
 * write_octal - prints integer to octal with write's function
 * @number: integer;
 * Return: number of characters printed
 */
int write_octal(unsigned int number)
{
	int temp;
	static int characters_printed;

	characters_printed = 0;
	if (number / 8)
	{
		write_octal(number / 8);
	}
	temp = number % 8 + '0';
	characters_printed++;
	write(1, &temp, sizeof(temp));
	return (characters_printed);
}
