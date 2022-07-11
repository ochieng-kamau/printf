#include "main.h"

/**
 * print_char - prints a char
 * @args: arguments
 * Return: count of chars
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
