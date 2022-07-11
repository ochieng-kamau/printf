#include <unistd.h>

/**
 * _putchar - prints a character to stdout
 * @c: character to print
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
