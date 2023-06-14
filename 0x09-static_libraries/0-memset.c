#include "main.h"

/**
 * _memset - A block of memory with a specific value
 * @s: starting adress of a memory
 * @b: the desire value
 * @n: number of bytes to that must be changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (; n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
