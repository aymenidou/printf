#include "main.h"

/**
 * printf_char - print character
 * @l: list arguments
 * Return: 1
 */
int printf_char(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}
/**
 * printf_string - print character
 * @l: list arguments
 * Return: sequence length
 */
int printf_string(va_list l)
{
	char *str;
	int i;

	str = va_arg(l, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * printf_percent - print percent
 * @l: list arguments
 * Return: 1
 */

int printf_percent(__attribute__((unused)) va_list l)
{
	_putchar('%');
	return (1);
}

/**
 * printf_unsigned_int - print unsigned integer
 * @l: list arguments
 * Return: number count
 */

int printf_unsigned_int(va_list l)
{
	unsigned int i;
	int count = 0, div = 1;

	i = va_arg(l, unsigned int);

	if (i < 1 && i != 0)
		return (-1);

	while ((i / div) > 9)
	{
		div *= 10;
	}
	while (div != 0)
	{
		count += _putchar(48 + (i / div));
		i %= div;
		div /= 10;
	}

	return (count);
}

/**
 * printf_reversed - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 * Return: The amount of characters printed
 */
int printf_reversed(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);
	return (len);
}
