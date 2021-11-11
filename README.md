# _printf

In this project, we built our own printf function based on the original one.

## NAME

**_printf** - Produces an output according to a format.

## SYNOPSIS
```sh
#include "main.h"

int _printf(const char *format, ...);
```

## DESCRIPTION

The function **_printf** is our own version of the original **printf** function.\
It has the same behavior and it produces an output according to a format.\
You pass a string as the first argument, and you can specify an unlimited number of formats specifiers (more exemple below).

For each format specifier you specify, you have to put an argument who's corresponding to the type of the format specifier.

For example, if you put 3 formats specifiers (one int, one char and one string) you have to put 3 arguments after the formatted string of the corresponding types.\
This function is not handling all the functionnality of the original one.

Our function is handling :

* %s: string
* %c: character
* %d: integer value as signed decimal integer
* %i: integer value with decimal, hexadecimal or octal type
* %b: binary
* %u: unsigned integer
* %o: octal format (base 8)
* %X, %x: hexadecimal format (X for uppercase and x for lowercase characters)
* %r: reversed string
* %R: rot13'ed string

## WHAT WE USED TO CREATE THIS FUNCTION

To create our **_printf** function, we mainly used structures, function pointers, recursive functions, variadic functions, loops and conditions.

### Authorized functions and macros was : 

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

## EXAMPLES

```sh
_printf("Hello World\n");
```

Produces the output : Hello World
```sh
_printf("Hello %s, you have %d years\n", "Bryan", 27);
```

Produces the output : Hello Bryan, you have 27 years
```sh
_printf("Your initials are %c%c\n", 'B', 'F');
```

Produces the output : Your initials are BF
```sh
_printf("Octal: %i, Decimal: %i, Hexadecimal: %i\n", 010, 8, 0x08);
```

Produces the output : Octal: 8, Decimal: 8, Hexadecimal: 8
```sh
_printf("This morning the temperature was %u °C\n", 3);
```

Produces the output : This morning the temperature was 3 °C
```sh
 _printf("%x is the conversion hexadecimal de %d" , 1550,1550);
```

Produces the output : 60e is the conversion hexadecimal of 1550
```sh
 _printf("%r is the inverted display of %s" , "Hello","Hello");
```

Produces the output : olleH is the inverted display of Hello
```sh
_printf("%R is the display of the sentence %s encoded in Rot13" , "Hello World","Hello World");
```

Produces the output : Uryyb Jbeyq is the display of the sentence Hello World encoded in Rot13

## AUTHOR

Joel DUMORTIER : [GitHub](https://github.com/jodt/)

Philippe WILLOT: [GitHub](https://github.com/phwillot/)
