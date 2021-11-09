#include "main.h"
#include <stdio.h>

int _strlen(char *str);

/**
  * _printS - Handling the %S format of printf
  * @arg: Current arg.
  *
  * Return: Full string
  */

int _printS(va_list arg)
{
	int i;
	char *str = va_arg(arg, char *);

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, "x", 1);

			if (str[i] < 16)
			{
				write(1, "0", 1);
			}
			write_X(str[i]);
		}
		i++;
	}
	return (i);
}
