#include <stdio.h>
#include "main.h"

int main(void)
{
	int len, len2;

	len = _printf("%r\n", "Salut");
	len2 = printf("%r\n", "Salut");
	_printf("%d %d\n", len, len2);
	printf("%d %d\n", len, len2);

	return (1);
}
