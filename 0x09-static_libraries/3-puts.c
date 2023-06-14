#include "main.h"

/**
 * _puts - function that prints a string to stdout.
 * @str: strinng
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
