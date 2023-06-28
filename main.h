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
int printf_integer(va_list);
int printf_number(va_list);
int printf_reversed(va_list);

/*Helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int hex_check(int num, char x);

#endif
