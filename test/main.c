#include <stdio.h>
#include "main.h"

int main(void)
{
	int len, len2;

	len = _printf("%r\n", (char *) 0);
	len2 = printf("%r\n", (char *) 0);
	_printf("%d %d\n", len, len2);
	printf("%d %d\n", len, len2);

	return (0);
}
