#include "main.h"


/**
 * _printf - it's printf with some changes
 * @format: string input to be formatted
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	link_t function_list[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{"d", printf_integer},
		{"i", printf_integer},
		{"u", printf_unsigned_int},
		{"o", printf_octal},
		{"x", printf_hexdecimal},
		{"X", printf_heXdecimal},
		{"r", printf_reversed},
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = analyser(format, function_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
