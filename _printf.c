#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: is a character string. The format string
 * is composed of 0 or more directives.
 * Return: the number of characters printed (excluding
 * null byte  used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start (args, format);
	size = handler(format, args);

	_putchar(-1);
	va_end (args);

	return (size);
}
