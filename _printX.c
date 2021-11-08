#include"main.h"
/**
 * _printX - prints int to hexadecimal
 * @arglist: list of arguments
 *
 * Return: number of characters printed
 */
int _printX(va_list arglist)
{
	int n = va_arg(arglist, int), count;

	count = write_X(n);
	return (count);
}
/**
 * write_X - prints int to hexadecimal with write's function
 * @number: integer
 *
 * Return: number of character
 */
int write_X(int number)
{
	int arr [] = {'A', 'B', 'C', 'D', 'E', 'F'};
	int  temp, index;
	static int characters_printed;

	characters_printed = 0;
	if (number / 16)
	{
		write_X(number / 16);
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

