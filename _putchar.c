#include "main.h"

/**
 * _putchar - write character
 * @c: character to be printed
 * Return: success 1, failure -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}