#include"main.h"
/**
 * _printo - prints integer to octal
 * @arglist: list of arguments
 *
 * Return: number of characters printed
 */
int _printo(va_list arglist)
{
	int n = va_arg(arglist, int), count = 0;

	count += write_octal(n, 1);
	return (count);
}

/**
 * write_octal - prints integer to octal with write's function
 * @number: integer;
 * @count: count
 * Return: number of characters printed
 */
int write_octal(int number, int count)
{
	int nbr = number, temp;

	if (nbr / 8)
	{
		write_octal(nbr / 8, count++);
	}
	temp = nbr % 8 + '0';
	write(1, &temp, sizeof(temp));
	return (count);
}
