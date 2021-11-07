#ifndef _MAIN_H_
#define _MAIN_H_

#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>

/**
 * struct type - structure type
 * @c: character to check
 * @ptr_f: pointer of function
 */
typedef struct type
{
	char *c;
	int (*ptr_f)(va_list);
} type;

int _printf(const char *format, ...);
int _prints(va_list);
int _printc(va_list);
#endif /* _MAIN_H_ */
