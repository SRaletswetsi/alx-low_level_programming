#include <stdio.h>
#include "main.h"

/**
 * _putchar - character c 
 * @c: print charactor
 *
 * Return: on success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
