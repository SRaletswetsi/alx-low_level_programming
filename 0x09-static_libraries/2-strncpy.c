#include "main.h"

/**
 * _strncpy - function for copying a string
 * @dest: enter value
 * @src: enter value
 * @n: enter value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int p = 0;
while (p < n && src[p] != '\0')
{
dest[p] = src[p];
p++;
}
while (p < n)
{
dest[p] = '\0';
p++;
}
return (dest);
}
