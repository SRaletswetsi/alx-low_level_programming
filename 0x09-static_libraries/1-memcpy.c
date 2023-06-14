#include "main.h"

/**
 * _memcpy - Fuction that copies memory
 * @dest:  memory  stored
 * @src: memory copied
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
	int m = n;

	for (; l < m; l++)
	{
		dest[l] = src[l];
		n--;
	}
	return (dest);
}
