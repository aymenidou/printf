#include "main.h"


/**
 * printf_integer - Prints an integer
 * @l: list of arguments
 * Return: Will return the amount of characters printed.
 */
int printf_integer(va_list l)
{
	int num_length;

	num_length = printf_number(l);
	return (num_length);
}

/**
 * printf_number - prints a number send to this function
 * @l: List of arguments
 * Return: The number of arguments printed
 */
int printf_number(va_list l)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(l, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
