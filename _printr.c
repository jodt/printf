#include "main.h"

/**
  * _printr - Print reverted string
  * @arg: Current arg.
  *
  * Return: number of characters
  */

int _printr(va_list arg)
{
	int i = 0, count = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (str[i])
		i++;

	while (i != 0)
	{
		write(1, &str[i], 1);
		i--;
		count++;
	}

	return (count);
}
