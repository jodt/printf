#include <stdio.h>
#include "main.h"

int main(void)
{
	int len;

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *) 0);
	_printf("%d\n", len);
	printf("%d\n", len);

	len = _printf("%!\n");
	_printf("%d\n", len);
	printf("%d\n", len);

	len = _printf("%K\n");
	_printf("%d\n", len);
	printf("%d\n", len);
	return (0);
}
