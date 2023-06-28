#include "main.h"

/**
 * analyser - 
 * @format: A string containing all the desired characters.
 * @fun_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int analyser(const char *format, link_t fun_list[], va_list arg_list)
{
	int i, j, return_value, chars_printed = 0;

	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			for (j = 0; fun_list[j].symbol != NULL; j++)/*Iterates through struct to find the right func*/
			{
				if (format[i + 1] == fun_list[j].symbol[0])
				{
					return_value = fun_list[j].fun(arg_list);
					if (return_value == -1)
						return (-1);
					chars_printed += return_value;
					break;
				}
			}
			if (fun_list[j].symbol == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					chars_printed = chars_printed + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_putchar(format[i]); /*call the write function*/
			chars_printed++;
		}
	}
	return (chars_printed);
}