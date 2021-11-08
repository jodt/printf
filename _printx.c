#include"main.h"
/**
 * _printx - prints int to hexadecimal
 * @arglist: list of arguments
 *
 * Return: number of characters printed
 */
int _printx(va_list arglist)
{
	unsigned int n = va_arg(arglist, unsigned int), count;

	count = write_x(n);
	return (count);
}
/**
 * write_x - prints int to hexadecimal with write's function
 * @number: integer
 *
 * Return: number of character
 */
int write_x(unsigned int number)
{
	int arr [] = {'a', 'b', 'c', 'd', 'e', 'f'};
	int  temp, index;
	static int characters_printed;

	characters_printed = 0;
	if (number / 16)
	{
		write_x(number / 16);
	}
	temp = number % 16;
	if (temp > 9)
	{
		characters_printed++;
		index = temp - 10;
		write(1, &arr[index], sizeof(arr[index]));
	}
	else
	{
		characters_printed++;
		temp += '0';
		write(1, &temp, sizeof(temp));
	}
	return (characters_printed);
}

