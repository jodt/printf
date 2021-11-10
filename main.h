#ifndef _MAIN_H_
#define _MAIN_H_
#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>
#include<inttypes.h>
#define BUFSIZE 1024
/**
 * struct type - structure type
 * @c: character to check
 * @ptr_f: pointer of function
 */
typedef struct type
{
	char c;
	int (*ptr_f)(va_list);
} type;
int _printf(const char *format, ...);
int _prints(va_list);
int _printc(va_list);
int _printd(va_list);
int _printb(va_list);
int  write_integer(int);
int  write_uninteger(unsigned int);
int _printu(va_list);
int _printb(va_list);
int _printo(va_list);
int write_octal(unsigned int);
int (*get_specifier_func(char))(va_list);
int write_x(unsigned long int);
int _printx(va_list);
int write_X(unsigned int);
int _printX(va_list);
int _printp(va_list);
int _printS(va_list);
int _printr(va_list);
int write_reverse(char *, int);
#endif /* _MAIN_H_ */
