#include "main.h"


/**
 * _strncat - function that link twon strings
 * @dest: enter value
 * @src: enter value
 * @n: enter value
 * using n bytes fron src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int q;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	q = 0;
	while (q < n && src[q] != '\0')
	{
	dest[p] = src[q];
	p++;
	q++;
	}
	dest[p] = '\0';
	return (dest);
}
