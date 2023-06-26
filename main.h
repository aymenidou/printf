#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct link - struct for symbols and functions
* @symbol: symbol after %
* @fun: function to be executed
*/
struct link
{
	char *symbol;
	int (*fun)(va_list);
};
typedef struct link link_t;


int analyser(const char *, link_t[], va_list);
int _printf(const char *, ...);
int _putchar(char);

/** print functions */
int printf_char(va_list);
int printf_string(va_list);
int printf_percent(va_list);
int printf_unsigned_int(va_list);
int printf_octal(va_list);
int printf_hexdecimal(va_list);
int printf_heXdecimal(va_list);


#endif