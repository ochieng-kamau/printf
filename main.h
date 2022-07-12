#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_digit(va_list args);
int print_mod(va_list args);
int print_rev_string(va_list args);
int print_number(int n);
int _printf(const char *format, ...);
int print_octal(unsigned int n)
int print_unsig(unsigned int n);
int print_hexaup(unsigned int n);
int print_hexalow(unsigned int n);
int print_bi(unsigned int n);
int _printstring(char *s);
int rot13(char *point);
int print_rev(char *);
int print_hl(uintptr_t n);
#endif
