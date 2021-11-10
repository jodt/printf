#include "main.h"

int write_reverse(char *str, int i);

/**
  * _printr - Print reverted string
  * @arg: Current arg.
  *
  * Return: number of characters
  */

int _printr(va_list arg)
{
	int count = 0;
	char *str = va_arg(arg, char *);

	return (write_reverse(str, count));
}

/**
  * write_reverse - write string in reverse
  * @str: string
  * @i: counter
  *
  * Return: Number of characters
  */

int write_reverse(char *str, int i)
{
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	if (!str[i])
		return (i);

	return (write_reverse((str + 1), i++));
}
